/**!
 * author: dween_md
 * created: 2024-01-29    22:33:07
 !**/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int findMax(vector<int> arr, int index)
{
    if (index == 0)
    {
        return arr[index];
    }
    int max = findMax(arr, index - 1);
    if (max < arr[index])
        max = arr[index];
    return max;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int maxElement = findMax(arr, n - 1);

    cout << "Maximum element in the array: " << maxElement << "\n";

    return 0;
}
