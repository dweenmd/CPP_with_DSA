/**!
* author: dween_md
* created: 2024-03-07    20:26:09


Graph representation
====================
Topic: Adjacency list -> linked list /c++ vector 

0 ---- 1
      / \
     2---3

#Total node= 4
#total edge = 4
#undirected + unweighted

matrix-> #of node * #of node
      -> 4*4

    0-> 1
    1-> 0, 2, 3
    2-> 1, 3
    3-> 1, 2
     
  

!**/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    int nodes = 4;
    vector<int> adj_list[nodes];

    adj_list[0]={1};
    adj_list[1]={0,2,3};
    adj_list[2]={1,3};
    adj_list[3]={1,2};

    for(int i=0;i<nodes;i++)
    {
        cout<<i<<" -> ";
        for(int j=0;j<adj_list[i].size();j++)
        {
            cout<<adj_list[i][j]<< " ";
        }
        cout<<endl;
    }

   
    return 0;
}