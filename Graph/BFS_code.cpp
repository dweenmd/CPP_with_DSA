/**!
* author: dween_md
* created: 2024-03-17    06:22:00

 pseudocode

 bfs(graph, source)
 - initial and array called visited and empty queue "q"
 - mark tha visited[source]=1 and q.push(source)
 -while the queue is not empty:
    - head = q.front()
    -q.pop()
    -print the node "head"
    -for all adjacent nodes of "head":
        -if visited[adj_node]==0
            - visited[adj_node]=1
            -q.push(adj_node)


!**/
#include <bits/stdc++.h>

using namespace std;
const int N=1e5;
int visited [N];
vector<int>adj_list[N];

void bfs(int src)
{
    queue<int>q;
    visited[src]=1;
    q.push(src);
    while(!q.empty()){
        int head=q.front();
        q.pop();
        cout<<head<<endl;
        for(int adj_node:adj_list[head])
        {
            if(visited[adj_node]==0)
            {
                visited[adj_node]=1;
                q.push(adj_node);
            }
        }
    }
}

int main()
{
    
    int nodes,edges;
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    
    int src=0;
    bfs(src);


    return 0;
}
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
    5
    3
    4

*/