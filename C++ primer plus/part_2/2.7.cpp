#include<iostream>
using namespace std;
void fun_1(int hours,int minutes)
{
    cout<<"Time: "<<hours<<":"<<minutes;
}
int main()
{
    int hours,minutes;
    cout<<"Enter the number of hours:";
    cin>>hours;
    cout<<"Enter the number of minutes:";
    cin>>minutes;
    fun_1(hours,minutes);
    return 0;
}