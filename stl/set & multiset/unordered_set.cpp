/**!
* author: dween_md
* created: 2024-02-20    21:12:55
!**/
/*
Topic:
decleration
insert
begin() and end()
count
find
erase()
size()
swap()
empty()
operator=
bucket_count()
bucket()
bucket_size()
*/
#include <bits/stdc++.h>
using namespace std;
//unordered set e value gula unique thakbe but ordered thakbe na
int main()
{
    // Declaration of unordered_set
    unordered_set<int> mySet;

    // Insert elements into the unordered_set
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(40);
    mySet.insert(50);
    mySet.insert(60); // Duplicate, won't be inserted

    // Demonstrate the usage of begin() and end()
    cout << "Elements in the unordered_set:";
    for (auto it = mySet.begin(); it != mySet.end(); ++it)
        cout << " " << *it;
    cout << endl;

    // Demonstrate the usage of count
    int count = mySet.count(30);
    cout << "Count of 30 in the unordered_set: " << count << endl;

    // Demonstrate the usage of find
    auto it = mySet.find(40);
    if (it != mySet.end())
        cout << "Element 40 found in the unordered_set" << endl;
    else
        cout << "Element 40 not found in the unordered_set" << endl;

    // Demonstrate the usage of erase
    mySet.erase(30);
    cout << "After erasing 30, unordered_set elements:";
    for (auto x : mySet)
        cout << " " << x;
    cout << endl;

    // Demonstrate the usage of size
    cout << "Size of the unordered_set: " << mySet.size() << endl;

    // Demonstrate the usage of swap
    unordered_set<int> anotherSet = {100, 200, 300};
    cout << "Before swap:" << endl;
    cout << "mySet:";
    for (auto x : mySet)
        cout << " " << x;
    cout << "\nanotherSet:";
    for (auto x : anotherSet)
        cout << " " << x;
    cout << endl;
    mySet.swap(anotherSet);
    cout << "After swap:" << endl;
    cout << "mySet:";
    for (auto x : mySet)
        cout << " " << x;
    cout << "\nanotherSet:";
    for (auto x : anotherSet)
        cout << " " << x;
    cout << endl;

    // Demonstrate the usage of empty
    cout << "Is the unordered_set empty? " << (mySet.empty() ? "Yes" : "No") << endl;

    // Demonstrate the usage of operator=
    unordered_set<int> thirdSet = {1000, 2000, 3000};
    cout << "Before assignment:" << endl;
    cout << "thirdSet:";
    for (auto x : thirdSet)
        cout << " " << x;
    cout << "\nmySet:";
    for (auto x : mySet)
        cout << " " << x;
    cout << endl;
    thirdSet = mySet;
    cout << "After assignment:" << endl;
    cout << "thirdSet:";
    for (auto x : thirdSet)
        cout << " " << x;
    cout << "\nmySet:";
    for (auto x : mySet)
        cout << " " << x;
    cout << endl;

    // Demonstrate the usage of bucket_count()
    cout << "Bucket count of mySet: " << mySet.bucket_count() << endl;

    // Demonstrate the usage of bucket()
    for (size_t i = 0; i < mySet.bucket_count(); ++i)
    {
        cout << "Bucket " << i << ":";
        for (auto it = mySet.begin(i); it != mySet.end(i); ++it)
            cout << " " << *it;
        cout << endl;
    }

    // Demonstrate the usage of bucket_size()
    for (size_t i = 0; i < mySet.bucket_count(); ++i)
        cout << "Size of bucket " << i << ": " << mySet.bucket_size(i) << endl;

    return 0;
}
