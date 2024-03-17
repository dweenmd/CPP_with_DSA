/**!
* author: dween_md
* created: 2024-03-16    19:03:45

   dfs pseudocode & complexity

   tree                                     |         graph
                                            |   //visited array
void dfs(int node)                          |void dfs(int node)
    {                                       |   {
        cout<<node<<endl;                   |         cout<<node<<endl;
        //base case                         |
                                            |
        if node does not have any child;    |         visited[node]=1;
                                            |
                return;                     |         for all adj_node of node;
                                            |             if visited[adj_node]=0;
            //general case                  |                 dfs(adj_node)
        for all childs of node;             |
                                            |   }
        dfs(child)                          |
    }                                       |



!**/
// example:
/*
    0 ---- 1 ----- 2 ----- 3
           |       |
           |       |
           5 ----- 4

    # No of node = 6
    # No of edge = 6

list of adj_ node=>(directly connected)
input:
    6 6

    0 1
    1 2
    2 3
    1 5
    2 4
    5 4
    output:
    0
    1
    2
    3
    4
    5

*/

#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int N = 1e5;
int visited[N];
vector<int> adj_list[N];

void dfs(int node)
{
    cout << node << endl;
    visited[node] = 1;
    for (int adj_node : adj_list[node])
    {
        if (visited[adj_node] == 0)
        {
            dfs(adj_node);
        }
    }
}

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;

    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    int src = 0;
    dfs(src);

    return 0;
}
/*
 node 6, edge 8

6 8
2 3
2 1
2 6
6 3
6 1
3 4
1 4
4 5


*/