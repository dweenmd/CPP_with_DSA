#include<bits/stdc++.h>
using namespace std;
int main()
{
    

    vector<vector<int>> v(5);

    v[0].push_back(10);
    v[0].push_back(20);
    v[0].push_back(30);

    v[1].push_back(40);
    v[1].push_back(50);
    v[1].push_back(60);

    v[2].push_back(70);
    v[2].push_back(80);
    v[2].push_back(90);

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }



}