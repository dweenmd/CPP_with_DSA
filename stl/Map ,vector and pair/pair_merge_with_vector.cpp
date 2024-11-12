#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter input value: ";
    cin >> n;
    vector<pair<pair<string, string>, int>> v;
    for (int i = 0; i < n; i++)
    {
        string fullName, nickName;
        int age;
        cout << "Enter First name: ";
        cin >> fullName;
        cout << "Enter Second Name: ";
        cin >> nickName;
        cout << "Enter age: ";
        cin >> age;

        v.push_back({{fullName, nickName}, age});
    }
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ") "
             << "Fullname: " << v[i].first.first << " " << v[i].first.second << '\n'
             << "Age: " << v[i].second << endl;
    }
    return 0;
}