/**!
* author: dween_md
* created: 2024-02-20    12:11:24
!**/
/*
topic:

lowerbound
upper bound
emplace
swap
operator
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s = {1, 2, 3, 4, 5, 6};
    // Displaying the elements of the set
    cout << "Set elements:";
    for (auto it : s)
        cout << it << " ";
    cout << endl;

    // Demonstration of lower_bound
    auto lb = s.lower_bound(3); // Lower bound of 3
    if (lb == s.end())
        cout << "The element is larger to the Greater Elements." << endl;
    else
        cout << "Lower bound of 3: " << *lb << endl;

    // Demonstration of upper_bound
    auto ub = s.upper_bound(3); // Upper bound of 3
    if (ub == s.end())
        cout << "The element is larger or equal to the greater elements.";
    else
        cout << "Upper bound of 3: " << *ub << endl;

    // Demonstration of emplace (inserting an element)
    auto result = s.emplace(7);
    if (result.second)
    {
        cout << "Element 7 inserted successfully" << endl;
    }
    else
    {
        cout << "Element 7 already exists" << endl;
    }
    // Demonstration of swap (swapping two sets)
    set<int> anotherSet = {10, 20, 30};
    cout << "Before swap:" << endl;
    cout << "s: ";
    for (auto it : s)
        cout << it << " ";
    cout << "\nanotherSet: ";
    for (auto it : anotherSet)
        cout << it << " ";
    cout << endl;

    //swaping 
    s.swap(anotherSet);


    cout << "After swap:" << endl;
    cout << "s: ";
    for (auto it : s)
        cout << it << " ";
    cout << "\nanotherSet: ";
    for (auto it : anotherSet)
        cout << it << " ";
    cout << endl;

    // Demonstration of operator= (assigning one set to another)
    set<int> thirdSet = {100, 200, 300};
    cout << "Before assignment:" << endl;
    cout << "thirdSet: ";
    for (auto it : thirdSet)
        cout << it << " ";
    cout << "\ns: ";
    for (auto it : s)
        cout << it << " ";
    cout << endl;

    //operator assigning
    thirdSet = s;


    cout << "After assignment:" << endl;
    cout << "thirdSet: ";
    for (auto it : thirdSet)
        cout << it << " ";
    cout << "\ns: ";
    for (auto it : s)
        cout << it << " ";
    cout << endl;

    return 0;
}