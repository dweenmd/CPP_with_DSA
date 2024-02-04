

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int ans = 0;
    for (int i = 0; i <= n; i++)
        if (a[i] != a[i - 1])
            ans++;
    cout << ans;
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    
    int ans = 0;  // Initialize ans to 1 assuming n > 0
    
    for (int i = 1; i <= n; i++)
        if (a[i] != a[i - 1])
            ans++;

    cout << ans;
    return 0;
}
*/
void func() {
    int* p = new int;
    // Do something with the pointer p if needed

    // Deallocate the memory before returning
    delete p;
    return;
}
