#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    vector<int> arr;
    for (int i = 0; i < a - 1; i++)
    {
        int element;
        cin >> element;
        arr.push_back(element);
    }
    int sumOfN_Elment = (a) * (a + 1) / 2;
    int sum_of_array = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum_of_array += arr[i];
    }
    int ans = sumOfN_Elment - sum_of_array;
    cout << ans;
}