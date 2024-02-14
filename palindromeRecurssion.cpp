#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    
    cout<<"Queue size: "<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<"Queue size: "<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<"Queue size: "<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<"Queue size: "<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<"Queue size: "<<q.size()<<endl;

}