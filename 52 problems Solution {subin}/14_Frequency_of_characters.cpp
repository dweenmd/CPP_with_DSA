#include <bits/stdc++.h>
using namespace std;

void countCharacterOccurrence() {
    string s;
    char ch;
    
    getline(cin, s);  // প্রথমে স্ট্রিং ইনপুট
    cin >> ch;        // এরপর ক্যারেক্টার ইনপুট
    cin.ignore();     // newline (\n) হ্যান্ডেল করার জন্য ignore() ব্যবহার

    int count = 0;
    // স্ট্রিং এর প্রতিটি ক্যারেক্টার চেক করছি
    for (char c : s) {
        if (c == ch) {
            count++;
        }
    }

    if (count > 0) {
        cout << "Occurrence of '" << ch << "' in '" << s << "' = " << count << "\n";
    } else {
        cout << "'" << ch << "' is not present\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;  // টেস্ট কেস সংখ্যা ইনপুট
    cin.ignore();  // প্রথম newline হ্যান্ডেল করার জন্য ignore()

    while (t--) {
        countCharacterOccurrence();  // প্রতিটি টেস্ট কেসের জন্য ফাংশন কল
    }

    return 0;
}
