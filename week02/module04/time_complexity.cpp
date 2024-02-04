// https://phitron.io/ph452/video/ph452-4-2-time-complexity-part-1
#include <bits/stdc++.h>
using namespace std;

// constant complexity
/*
time complexity O(n)^2= O(1)
memory complexity O(n)^2= O(1)//memory te a,b,c maxi,mini,sum,mul eigula ase

*/

/*
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int maxi = max({a, b, c});
    int mini = min({a, b, c});
    int sum = a + b + c;
    int mul = a * b * c;
    cout << maxi << endl;
    cout << mini << endl;
    cout << sum << endl;
    cout << mul << endl;

    return 0;
}
*/

// variable complexity
/*
time complexity = O(n+1+n+1)=O(2*n+1)=O(c*n)=O(n)  //variable constant ke dominate kore
memory complexity = O(n)

*/

/*
int main()
{
    int n; // O(1)
    cin >> n;
    vector<int> a(n); // O(n)
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
        int maxi = a[0];
        int mini = a[0];
        int sum = 0;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, a[i]);
        mini = min(mini, a[i]);
        sum = sum + a[i];
    }
    cout << maxi << endl;
    cout << mini << endl;
    cout << sum << endl;


    return 0;
}
*/

// now we write a O(n)^2 code

/*

time complexity =O(n+n*n)= O(n)^2
memory complexity =O(n)
*/

/*


*/

int main()
{

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        string ans = "NO\n";
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            if (a[i] == a[j])
            {
                ans = "YES\n";
            }
        }
        cout << "i = " << i << " " << ans;
    }
    return 0;
}
