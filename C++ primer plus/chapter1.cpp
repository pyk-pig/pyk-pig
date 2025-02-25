#include<iostream>
#include<algorithm>
#include<mutex>
#include<thread>
#include<condition_variable>
#include<Windows.h>
using namespace std;
void func1(int start, int end)
{
    for(int i = start;i <= end;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

struct My_class
{
    void operator()(int start,int end)
    {
        for(int i = start;i <= end;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    //1.函数指针
    thread t1(func1,1,10);

    Sleep(1);

    //2.仿函数（函数对象）
    thread t2(My_class(),10,20);

    Sleep(1);
    
    //3. lambda表达式
    thread t3([](const string& str) -> void{cout<<str<<endl;},"I am thread-t3");

    Sleep(1);

    t1.join();
    t2.join();
    t3.join();
    return 0;
}