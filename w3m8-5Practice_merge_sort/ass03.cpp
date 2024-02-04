/**!
* author: dween_md
* created:  2024-01-21    09:19:35
!**/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
void printArr(const vector<int> &arr)
{
    for (int i = 0; i < arr.size(); ++i)
    {
        cout << arr[i] << " ";
    }
}

vector<int> merge_sort(vector<int> arr)
{
    // base case
    if (arr.size() <= 1)
    {
        return arr;
    }
    int mid = arr.size() / 2;

    //(left)  2 4 6 | 3 5 7 9 (right)

    vector<int> left;
    for (int i = 0; i < mid; i++)
    {
        left.push_back(arr[i]);
    }
    vector<int> right;
    for (int i = mid; i < arr.size(); i++)
    {
        right.push_back(arr[i]);
    }

    // working with recursion
    vector<int> sorted_left = merge_sort(left);

    vector<int> sorted_right = merge_sort(right);

    vector<int> sorted_array;
    int indxl = 0;
    int indxr = 0;
    // merging sorted_left & sorted_right arry in sorted array
    for (int i = 0; i < arr.size(); i++)
    {
        if (indxl == sorted_left.size())
        {
            sorted_array.push_back(sorted_right[indxr]);
            indxr++;
        }
        else if (indxr == sorted_right.size())
        {
            sorted_array.push_back(sorted_left[indxl]);
            indxl++;
        }
        else if (sorted_left[indxl] < sorted_right[indxr])
        {
            sorted_array.push_back(sorted_left[indxl]);
            indxl++;
        }
        else
        {
            sorted_array.push_back(sorted_right[indxr]);
            indxr++;
        }
    }
    // printArr(sorted_array);
    // cout << "\n";

    return sorted_array;
}

void counting(vector<int> array)
{
    int k;
    cin >> k;
    int i = 0;
    int j = n - 1;
    int count = 0;
    while (i < j)
    {
        if (array[i] + array[j] > k)
            j--;
        else if (array[i] + array[j] < k)
            i++;

        else
        {
            count++;
            i++;
            j++;
        }
    }
    cout << count << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // int n;
    cin >> n;
    vector<int> array;
    for (int i = 0; i < n; i++)
    {
        int elements;
        cin >> elements;
        array.push_back(elements);
    }

    vector<int> sorted = merge_sort(array);
   // cout << "sorted array is:";
    //printArr(sorted);
    //cout << '\n';
    counting(sorted);

    // cout << counted << endl;
    return 0;
}