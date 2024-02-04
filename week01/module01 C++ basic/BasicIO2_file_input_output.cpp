#include<bits/stdc++.h>
// #include <iostream>
// #include <fstream>

using namespace std;

/*
int main()
{
    freopen("input.txt","r",stdin);//file theke input nicche
    string s;
    //cin>>s;
    getline(cin , s);
    cout<<s<<"\n";
return 0;
}
*/


int main()
{
    ofstream of; // file output er jonno ofstream ar input er jonno  ifstream;
    of.open("output.txt");
    // cout er jaygay of lehelie outpur asbe

    of << "hello world\n" ;//output.txt te giye print hobe

    ifstream ifs;
    ifs.open("open.txt");
    int x;
    double y,z;
    ifs >>  x >> y >> z;
    cout <<x<< " "<<y<<" "<<z<<"\n";
    ifs.close ();
    of.close();


    return 0;
}
