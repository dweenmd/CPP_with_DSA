/**!
* author: dween_md
* created: 2024-05-31    03:00:26
!**/
#include <bits/stdc++.h>
#define ll long long int
#define asc(v) sort(v.begin(), v.end()) // vectors,pairs,tuples,string
#define dsc(v) sort(v.begin(), v.end(), greater<int>())

using namespace std;
void insertionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; ++i)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}
void selectionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i)
    {
        // Find the index of the minimum element in the unsorted part of the array
        int minIndex = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        // Swap the minimum element with the first element of the unsorted part
        swap(arr[i], arr[minIndex]);
    }
}
int main()
{

    int n;
    cout << "Enter the number of elements in the list: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    vector<int> arr2 = arr;
    insertionSort(arr);

    cout << "List in ascending order after insertion sort: ";
    for (auto it : arr)
        cout << it << " ";
    cout << endl;

    selectionSort(arr2);

    cout << "List in ascending order after Selection Sort: ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}
