#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int min;

    for (int i = 0; i < n; i++)
    {
        min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
                min = j;
        }

        swap(arr[i], arr[min]);
    }
    
    cout << "After selection sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
