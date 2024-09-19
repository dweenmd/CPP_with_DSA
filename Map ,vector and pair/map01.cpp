// https://www.javatpoint.com/post/cpp-map
// https://www.youtube.com/watch?v=c-mdVPmbOT0&list=PL0G2Ga9ALv6lgn-tZy5BxFzdr1AZ2E74l&index=13
// https://www.youtube.com/watch?v=so7pgUhvkk8&list=PL0G2Ga9ALv6lgn-tZy5BxFzdr1AZ2E74l&index=14
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // .....map e key duplicate hoy na and key gula sorted akare thake

    // map<int,pair<vector<int>,int> mp;

    string s;
    cin >> s;
    map<char, vector<int>> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]].push_back(i);
    }
    cout << "char-> index" << endl;
    for (auto it : mp)
    {
        char ch = it.first;
        vector<int> v = it.second;
        cout << ch << "   -> ";
        for (int val : v)
        {
            cout << val << " ";
        }
        cout << "\n";
    }
}
/*
input & output:
dweenmohammad
char-> index
a   -> 8 11
d   -> 0 12
e   -> 2 3
h   -> 7
m   -> 5 9 10
n   -> 4
o   -> 6
w   -> 1

*/
