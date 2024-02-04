/*

you are given an array of n positive integers. The next line will contain an integer k. You need to tell whether there exists more than one occurrence of k in that array or not. If there exists more than one occurrence of k print YES, Otherwise print NO.
See the sample input-output for more clarification.
Note - The given array will be sorted in increasing order. And it is guaranteed that at least one occurrence of k will exist.

** Solve this problem using binary search means O(logn)**

Sample input 1- 								Sample output 1- 
7
1 3 4 6 6 9 17									           YES
6

Sample input 2-								Sample output 2- 
10
1 2 3 4 5 6 7 8 9 10									 NO
5

Explanation -
In sample input 1 there exist two occurrences of k, hence the answer is YES

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int elements;
        cin >> elements;
        arr.push_back(elements);
    }

    int t;
    cin >> t;
    int target = t;

    int low = 0;
    int high = arr.size() - 1;
    int count = 0;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
        {
            count++;

            low = mid + 1; 
   
        }
        else if (target > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (count > 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
