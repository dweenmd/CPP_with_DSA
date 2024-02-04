/**!
* author: dween_md
* created:  2024-01-29    21:15:36
!**/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
void Print(const vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    printf("\n");
}
vector<int>sort(vector<int> arr)
{
    if (arr.size() <= 1)
    {
        return arr;
    }
    int mid = arr.size() / 2;
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
    vector<int>sorted_left=sort(left);
    vector<int>sorted_right=sort(right);
    vector<int>sorted_arr;
    int l=0,r=0;
    for(int i=0;i<arr.size();i++)
    {
        if(l==sorted_left.size())
        {
            sorted_arr.push_back(sorted_right[r]);
            r++;
        }
        else if(r==sorted_right.size())
        {
            sorted_arr.push_back(sorted_left[l]);
            l++;
        }
        else if(sorted_left[l]>sorted_right[r])
        {
            sorted_arr.push_back(sorted_right[r]);
            r++;
        }
        else
        {
            sorted_arr.push_back(sorted_left[l]);
            l++;
        }
    }
    return sorted_arr;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        arr.push_back(element);
    }
    vector<int>ans= sort(arr);
    vector<int>final;
    for(int i=0;i<n;i++)
    {
        if(ans[i]==ans[i+1])
        {
            continue;
        }
        
            final.push_back(ans[i]);
        
    }
    //Print(ans);
    Print(final);

    return 0;
}