/**!
* author: dween_md
* created: 2024-02-20    18:02:45
!**/
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    // Declaration of multiset
    multiset<int> ms;

    // Insert elements into the multiset
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(4);
    ms.insert(5);
    ms.insert(5); // Duplicate, will be inserted

    // Demonstrate the usage of begin and end
    cout << "Elements in the multiset using begin and end:";
    for (auto it = ms.begin(); it != ms.end(); ++it)
        cout << *it << " ";
    cout << endl;

    // Demonstrate the usage of empty
    cout << "Is the multiset empty? " << (ms.empty() ? "Yes" : "No") << endl;

    // Demonstrate the usage of erase
    ms.erase(3); // Erase element 3
    cout << "After erasing 3, multiset elements:";
    for (auto it : ms)
        cout << it << " ";
    cout << endl;

    // Demonstrate the usage of clear
    ms.clear(); // Clear the multiset
    cout << "\nAfter clearing the multiset, is the multiset empty? " << (ms.empty() ? "Yes" : "No") << endl;

    // Insert some elements again
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(4);
    ms.insert(5);
    ms.insert(5);
    ms.insert(5);

    // Demonstrate the usage of find
    auto it = ms.find(4);
    if (it != ms.end())
        cout << "\nElement 4 found in the multiset" << endl;
    else
        cout << "\nElement 4 not found in the multiset" << endl;

    // Demonstrate the usage of count
    int count = ms.count(5);
    cout << "\nCount of element 5 in the multiset: " << count << endl;

    // Demonstrate the usage of lower_bound
    auto lb = ms.lower_bound(3);
    cout << "\nLower bound of 3: " << *lb << endl;

    // Demonstrate the usage of upper_bound
    auto ub = ms.upper_bound(3);
    cout << "Upper bound of 3: " << *ub << endl;

    // Demonstrate the usage of emplace
    ms.emplace(6); // Insert element 6
    cout << "After emplacing 6, multiset elements:";
    for (auto it : ms)
        cout << it << " ";
    cout << endl;

    // Demonstrate the usage of swap
    multiset<int> anotherMultiset = {10, 20, 30};
    cout << "Before swap:" << endl;
    cout << "ms: ";
    for (auto it : ms)
        cout << it << " ";
    cout << "\nanotherMultiset: ";
    for (auto it : anotherMultiset)
        cout << it << " ";
    cout << endl;
    ms.swap(anotherMultiset);
    cout << "After swap:" << endl;
    cout << "ms: ";
    for (auto it : ms)
        cout << it << " ";
    cout << "\nanotherMultiset: ";
    for (auto it : anotherMultiset)
        cout << it << " ";
    cout << endl;

    // Demonstrate the usage of operator=
    multiset<int> thirdMultiset = {100, 200, 300};
    cout << "Before assignment:" << endl;
    cout << "thirdMultiset: ";
    for (auto it : thirdMultiset)
        cout << it << " ";
    cout << "\nms: ";
    for (auto it : ms)
        cout << it << " ";
    cout << endl;
    thirdMultiset = ms;
    cout << "After assignment:" << endl;
    cout << "thirdMultiset: ";
    for (auto it : thirdMultiset)
        cout << it << " ";
    cout << "\nms: ";
    for (auto it : ms)
        cout << it << " ";
    cout << endl;

    return 0;
}
