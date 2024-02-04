#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;
    void print_info()
    {
        cout<<name <<" "<<std_id<<" "<<age<<" "<<fathers_name<<" "<<mothers_name<<"\n";
    }

};

int main()
{
    student s,s1;

    s.name="Dween";
    s.std_id= 10785393;
    s.age=21;
    s.fathers_name="Abdul Awal";
    s.mothers_name="Rehana Akter";
    s.print_info();
    s1.name="sumaia";
    s1.std_id= 10785394;
    s1.age=15;
    s1.fathers_name="Abdul Awal";
    s1.mothers_name="Rehana Akter";
    s1.print_info();

    return 0;
}
