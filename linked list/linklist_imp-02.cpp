/**!
* author: dween_md
* created:  2024-01-25    08:42:14
!**/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    Node *a = new Node(10);
    cout << a->value << endl;

    Node*b=new Node(20);
    Node *c=new Node(30);
    //node connection in manually
    a->next=b;
    b->next=c;
    cout<<a->value<<" "<<a->next->value<<" "<<b->next->value;

    return 0;
}