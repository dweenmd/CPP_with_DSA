#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {7, 2, 13, 2, 11, 4};
    //  int n = arr.size(); //for stl

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, n);
    int c = 1;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                // print
                cout << "Step " << c << ": ";
                printArray(arr, n);
                c += 1;
            }
            
        }
    }

    cout << "Sorted Array: ";
    printArray(arr, n);

    return 0;
}
