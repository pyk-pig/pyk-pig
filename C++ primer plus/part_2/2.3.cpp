#include<iostream>
using namespace std;
void fun_1()
{
    cout<<"Three blind mice"<<endl;
}
void fun_2()
{
    cout<<"See now they run"<<endl;
}
int main()
{
    for(int i =0;i<2;i++)
    {
        fun_1();
    }
    fun_2();
    fun_2();
    return 0;
}