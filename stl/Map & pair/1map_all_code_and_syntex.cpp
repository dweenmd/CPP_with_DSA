///   ***   ---   |||      In the name of ALLAH      |||   ---   ***   ///

#include <bits/stdc++.h>
using namespace std;

// Comparator for custom sorting of map by key
struct CustomCompareKey
{
    bool operator()(const int &a, const int &b) const
    {
        return a > b; // Sort keys in descending order
    }
};

// Comparator for sorting map by value
bool cmpValue(const pair<int, int> &p1, const pair<int, int> &p2)
{
    if (p1.second == p2.second)
        return p1.first < p2.first; // Tie-break: sort by key
    return p1.second > p2.second;   // Sort by value descending
}

int main()
{
    /// Basic map declaration and initialization
    map<int, string> m;
    m[1] = "One";
    m[2] = "Two";
    m[3] = "Three";

    cout << "Initial map contents:\n";
    for (const auto &p : m)
        cout << p.first << " -> " << p.second << endl;
    cout << endl;

    /// Accessing and modifying elements
    m[4] = "Four";        // Adding new element
    m[2] = "Two Updated"; // Updating existing element
    cout << "After modifying the map:\n";
    for (const auto &p : m)
        cout << p.first << " -> " << p.second << endl;
    cout << endl;

    /// Searching and finding in map
    if (m.find(3) != m.end())
        cout << "Key 3 found with value: " << m[3] << endl;
    else
        cout << "Key 3 not found!" << endl;

    /// Erasing elements
    m.erase(2); // Erase key 2
    cout << "\nAfter erasing key 2:\n";
    for (const auto &p : m)
        cout << p.first << " -> " << p.second << endl;
    cout << endl;

    /// Using map with custom comparator for keys
    map<int, string, CustomCompareKey> customMap;
    customMap[3] = "Three";
    customMap[1] = "One";
    customMap[2] = "Two";

    cout << "Custom sorted map (keys in descending order):\n";
    for (const auto &p : customMap)
        cout << p.first << " -> " << p.second << endl;
    cout << endl;

    /// Using a map with integer keys and values
    map<int, int> intMap;
    intMap[3] = 30;
    intMap[1] = 10;
    intMap[2] = 20;
    intMap[4] = 10;

    cout << "Integer map contents:\n";
    for (const auto &p : intMap)
        cout << p.first << " -> " << p.second << endl;
    cout << endl;

    /// Sorting map by value
    vector<pair<int, int>> vec(intMap.begin(), intMap.end());
    sort(vec.begin(), vec.end(), cmpValue);

    cout << "Map sorted by value (descending):\n";
    for (const auto &p : vec)
        cout << p.first << " -> " << p.second << endl;
    cout << endl;

    /// Map size and clear
    cout << "Map size: " << m.size() << endl;
    m.clear();
    cout << "Map cleared. Current size: " << m.size() << endl;

    return 0;
}
