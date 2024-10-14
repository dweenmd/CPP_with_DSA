#include <bits/stdc++.h>
#define ll long long
using namespace std;

void printAlternateElements();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t; // টেস্ট কেসের সংখ্যা ইনপুট নেয়া

    while (t--) {
        printAlternateElements(); // প্রতিটি টেস্ট কেসের জন্য ফাংশন কল করা
    }

    return 0;
}

void printAlternateElements() {
    int n;
    cin >> n; // অ্যারের উপাদান সংখ্যা ইনপুট নেয়া

    vector<int> arr(n); // অ্যারে তৈরী করা

    // অ্যারের উপাদানগুলো ইনপুট নেয়া
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // একান্তর উপাদান প্রিন্ট করা
    for (int i = 0; i < n; i += 2) {
        cout << arr[i] << " ";
    }
    cout << "\n"; // পরবর্তী টেস্ট কেসের জন্য নতুন লাইন
}
