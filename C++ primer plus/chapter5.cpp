#include<iostream>
#include<mutex>
#include<thread>
#include<condition_variable>
#include<Windows.h>
using namespace std;
int number = 0;
mutex mtx;
condition_variable cv;
void printOdd()
{
    while(number<=100)
    {
        unique_lock<mutex> lock(mtx);
        cv.wait(lock, []{return number % 2!=0;});
        if(number <= 100)
        {
            cout<<number<<"  "<<endl;
            number++;
        }
        lock.unlock();
        cv.notify_one();
    }
}

void printEven()
{
    while(number<=100)
    {
        unique_lock<mutex>lock(mtx);
        cv.wait(lock,[]{return number % 2==0;});
        if(number <= 100)
        {
            cout<<number<<"  "<<endl;
            number++;
            Sleep(1000);
        }
    }
}

int main()
{
    thread t1(printEven);
    thread t2(printOdd);
    t1.join();
    t2.join();
    return 0;
}