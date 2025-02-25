#include<iostream>
#include<algorithm>
#include<mutex>
#include<thread>
#include<condition_variable>
#include<Windows.h>
using namespace std;
void threadProcess()
{
    for(int i= 0; i < 5;i++)
    {
        cout<<"Thread is running"<<endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout<<"Thread is stopped"<<endl;
}

int main()
{
    thread t1(threadProcess);
    //分离线程
    t1.detach();
    cout<<"Main thread is running"<<endl;
    this_thread::sleep_for(chrono::seconds(5));
    cout<<"Main thread is stopped"<<endl;
    return 0;
}