#include<iostream>
#include<algorithm>
#include<mutex>
#include<thread>
#include<condition_variable>
#include<Windows.h>
using namespace std;
void Print()
{
    cout<<"Hello, world!"<<endl;
}

int main()
{
    thread t1(Print);
    if(t1.joinable())
    {
        cout<<"Thread is joinable!"<<endl;
    }
    else
    {
        cout<<"Thread is not joinable!"<<endl;
    }
    t1.join();
    if(t1.joinable())
    {
        cout<<"Thread is joinable!"<<endl;
    }
    else
    {
        cout<<"Thread is not joinable!"<<endl;
    }
    return 0;
}