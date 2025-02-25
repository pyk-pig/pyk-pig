#include<iostream>
using namespace std;
void fun_1()
{
    int C,F;
    cout<<"Please enter a Celsius value:";
    cin>>C;
    F = C * 1.8 + 32.0;
    cout<<""<<C<<" degrees Celsius is "<<F<<" degrees Fahrenheit."<<endl;
}
int main()
{
    fun_1();
    return 0;
}