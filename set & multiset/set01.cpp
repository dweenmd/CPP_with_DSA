/**!
* author: dween_md
* created: 2024-02-20    11:00:23
!**/
/*
set topic:
insert
size
max_size
begin end
empty
erase
clear
find
count

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declaration of set
    set<int> s;

    // Insert elements into the set
    s.insert(1);
    s.insert(2);
    s.insert(5); // set e always ascending order e thake
    s.insert(4);
    s.insert(3);
    s.insert(4); // This won't be inserted as set contains only unique elements

    // Iterator declaration to traverse the set
    set<int>::iterator it;
    cout << "Traverse using iterator: ";
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << "\nSize of set: " << s.size() << endl;
    cout << "Max elements we can insert in the set: " << s.max_size() << endl;

    // Declaration of set with descending order
    set<int, greater<int>> s1;
    // Insert elements into the descending order set
    s1.insert(1);
    s1.insert(2);
    s1.insert(5);
    s1.insert(4);
    s1.insert(3);
    s1.insert(4); // This won't be inserted as set contains only unique elements

    cout << "Print set using auto iterator: ";
    for (auto it : s1) // Used auto to simplify the loop
    {
        cout << it << " ";
    }
    cout << endl;

    // Check if set is empty or not
    if (s.empty())
        cout << "Set is Empty" << endl;
    else
        cout << "Set is Not Empty" << endl;

    // Clear the descending order set
    s1.clear();
    if (s1.empty())
        cout << "Descending order set is Empty" << endl;
    else
        cout << "Descending order set is Not Empty" << endl;

    // Erase element 2 from the set
    cout << "\nErase 2 from set: ";
    s.erase(2);
    for (auto it : s)
        cout << it << " ";

    // Erase using iterator (assuming set is not empty)
    cout << "\nErase using iterator: ";
    if (!s.empty())
    {
        set<int>::iterator ita = s.begin();

        //advance(ita,2)  //2 no index iterate kore ache;

        s.erase(ita); // Erasing the first element
        for (auto it : s)
            cout << it << " ";
    }
    cout << endl;
    // Find any element using iterator
    auto itf = s.find(4);
    if (itf != s.end())
        cout << "Element 4 Found" << endl;
    else
        cout << "Element 4 Not Found" << endl;

    // Find count of a specific element
    int c = s.count(5);
    cout << "Count of element 5: " << c << endl;

    return 0;
}
