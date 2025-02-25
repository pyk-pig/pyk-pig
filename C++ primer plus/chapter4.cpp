#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
int g_val = 0;
mutex g_mutex;
void func(int n)
{
    g_mutex.lock();//加锁
    cout<<"address of g_val : "<<&g_val<<"  "<<"address of n : "<<&n<<endl;
    g_mutex.unlock();
}

int main()
{
    int n = 10;
    thread t1(func, n);
    //{lock_guard<mutex> lock(g_mutex);}
    thread t2(func, n);
    //{lock_guard<mutex> lock(g_mutex);}

    t1.join();
    t2.join();
    return 0;
}