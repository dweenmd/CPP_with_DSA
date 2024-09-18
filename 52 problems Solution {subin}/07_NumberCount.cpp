#include <bits/stdc++.h>
#define ll long long
using namespace std;

void code();
int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);
    int t;cin >> t;cin.ignore(); while(t--)code();
}
void code()
{
    string s;
    getline(cin, s);
    // stringstream ব্যবহার করে লাইনের প্রতিটি সংখ্যা আলাদা করা
    stringstream ss(s);
    string temp;
    int count = 0;
    // stringstream থেকে যতবার সংখ্যা পাওয়া যাবে, গুনবে
    while (ss >> temp) {
        count++;
    }
    cout << count << "\n";
}
/*
ss >> temp:

stringstream ss স্ট্রিমটি স্ট্রিং থেকে প্রতিটি সংখ্যা আলাদা করে temp-এ সংরক্ষণ করছে।
>> অপারেটরটি স্ট্রিম থেকে একটি সংখ্যা বা ওয়ার্ড নিয়ে temp-এ রাখছে।
যদি কোনো সংখ্যা পাওয়া যায়, তাহলে ss >> temp সত্য (True) রিটার্ন করবে এবং লুপটি চলবে।
 যখন আর কোনো সংখ্যা থাকবে না (অথবা শুধুমাত্র স্পেস বা কোনো অক্ষর থাকবে), 
 তখন ss >> temp মিথ্যা (False) রিটার্ন করবে এবং লুপটি বন্ধ হবে।
*/
