#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int visited[N];
int level[N];//new line

vector<int> adj_list[N];

void bfs(int source)
{
    queue<int> q;
    visited[source]=1;
    level[source]=0;
    q.push(source);
    while(!q.empty())
    {
        int head=q.front();
        q.pop();
        for(int adj_node:adj_list[head]){
            if(visited[adj_node]==0)
            {
                visited[adj_node]=1;
                level[adj_node]=level[head]+1;//new line
                q.push (adj_node);
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
    int source=0;
    bfs(source);
    for(int i=0;i<nodes;i++)
    {
        cout<<"node"<<i<<" -> level: "<<level[i]<<endl;
    }
    return 0;
}

/*
   (0)    (1)      (2)
    0 ---- 1 ----- 2 ----- 3 (3)
           |       |
           |       |
       (2) 5 ----- 4 (3)
input:
    6 6

    0 1
    1 2
    2 3
    1 5
    2 4
    5 4
node0 -> level: 0
node1 -> level: 1
node2 -> level: 2
node3 -> level: 3
node4 -> level: 3
node5 -> level: 2*/