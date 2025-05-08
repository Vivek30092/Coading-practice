//using nested if showing the result with compliments
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"your total number:";
    cin >> num;
    if(num>33)
    {
        if(num>80)
        {cout<<"you are great because you have passed the exam with good marks";}
        else
        {"you did well";}
    }
    else 
    {"try next time bcz you have failed the exam.";}

    return 0;
}