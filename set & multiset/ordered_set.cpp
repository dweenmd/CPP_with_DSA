/*
In C++, the standard library does not provide a direct
implementation of an ordered set. However, you can achieve
similar functionality using a combination of set and vector
*/
// C++ program to implement find_by_order()
// for Policy Based Data Structures
#include <bits/stdc++.h>

// Importing header files
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

// Declaring Ordered Set
#define ordered_set tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>
/*
topic:
1.order_of_key(k)
2.find_by_order(k)
*/
int main()
{
    ordered_set os;
    os.insert(1);
    os.insert(2);
    os.insert(3);
    os.insert(4);
    os.insert(5);
    os.insert(6);

    // Print elements in ordered set
    for(auto it: os)
        cout << it << " ";
    cout << endl;

    // Demonstrating order_of_key() function
    cout << "Order of key 3: " << os.order_of_key(3) << endl; // should print 2 (indexing is 0-based)

    // Demonstrating find_by_order() function
    cout << "Element at index 2: " << *os.find_by_order(3) << endl; // should print 3

    return 0;
}
