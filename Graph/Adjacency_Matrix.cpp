/**!
* author: dween_md
* created: 2024-03-07    20:26:09


Graph representation
====================
Topic: Adjacency Matrix 2D ARRAY
0 ---- 1
      / \
     2---3

#Total node= 4
#total edge = 4
#undirected + unweighted

matrix-> #of node * #of node
      -> 4*4

matrix[i][j]=1
    if and only if (i->j)
relation:
    0->1
    1->0
    1->2
    2->1
    2->3
    3->2
    3->1
    1->3

    0 1 0 0 
    1 0 1 1
    0 1 0 1
    0 1 1 0

!**/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    int nodes = 4;
    int matrix[nodes][nodes] = {};//assing with 0 
    matrix[0][1]=1;
    matrix[1][0]=1;
    matrix[1][2]=1;
    matrix[1][3]=1;
    matrix[2][1]=1;
    matrix[2][3]=1;
    matrix[3][1]=1;
    matrix[3][2]=1;
    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < nodes; j++)
        {
            cout << matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}