#include <bits/stdc++.h>
#define ll long long
using namespace std;

void seive(int n);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout << "Enter a number for printing all prime number in its range.\n";
    int n;
    cin >> n;
    seive(n);
}
void seive(int n)
{
    int prime[n + 1] = {0};  

    for (int i = 2; i * i <= n; i++)  // Only go up to sqrt(n)
    {
        if (prime[i] == 0) 
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 1;
            }
        }
    }

    int cnt = 0;
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)  // If prime[i] is still 0, i is a prime number
        {
            cout << i << " ";
            cnt++;
        }
        if (cnt == 10)
        {
            cout << "\n";
            cnt = 0;
        }
    }
}
