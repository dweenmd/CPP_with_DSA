//https://codeforces.com/contest/999/problem/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, vector<int>> idx;
    for (int i = 0; i < n; i++)
    {
        idx[s[i]].push_back(i);
    }

    map<int, bool> visited;

    // Iterating over the keys of the map
    for (auto it = idx.begin(); it != idx.end(); ++it)
    {
        char key = it->first;

        for (int i = 0; i < idx[key].size() && k >= 1; i++)
        {
            int index = idx[key][i]; // index er vitor map er key er index gula store hobe

            visited[index] = true; // visited map er [index] er value onujai key point gula true kore dilam

            k--;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            cout<<s[i];
        }
    }

   
}
