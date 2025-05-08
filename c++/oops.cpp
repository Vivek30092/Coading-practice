#include<iostream>
#include<string>
using namespace std;

    class Teacher{
        public:
        //properties
        string name;
        string dept;
        string subject;
        double salary;


        //methods , member function
        void changeDept(string newDept){
            dept = newDept;
        }
    };
int main(){
    Teacher t1;
    t1.name="vivek";
    cout<<t1.name<<endl;

    return 0;
}