/**!
* author: dween_md
* created:  2024-02-02    11:36:58
!**/

#include <bits/stdc++.h>
using namespace std;
void Print(list<int> l)
{
    // list<int>::iterator a=l.begin();
    auto a = l.begin();
    while (a != l.end())
    {
        cout << *a << " ";
        a++;
    }
    cout << "\n";
}
void Insert(list<int> &l, int index, int value)
{
    auto it = l.begin(); // ekta iterator neya hoise
    advance(it, index);  // advance function dara iterator er index select kora hoise
    l.insert(it, value); // iterator er index e value push kora hoise
}
void Delete(list<int> & l,int index)
{
    auto it =l.begin();
    advance(it,index);
    l.erase(it);
}
int main()
{

    list<int> l;
    // push front O(1)
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);
    Print(l);
    // push_back O(1)
    l.push_back(40);
    l.push_back(50);
    Print(l);

    // pop back O(1)
    l.pop_back();
    Print(l);
    // pop front O(1)
    l.pop_front();
    Print(l);
    // insert at any position
    Insert(l,1, 100);
    Print(l);
    Delete(l,1);
    Print(l);

    return 0;
}