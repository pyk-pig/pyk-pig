#include<iostream>
#include<windows.h>
using namespace std;
POINT GetMouseCurPoint()
{
    POINT mypoint;
 
    for (int i = 0; i < 100; i++)
    {
        GetCursorPos(&mypoint);//获取鼠标当前所在位置
        printf("% ld, % ld \n", mypoint.x, mypoint.y);
        Sleep(1000);
    }
}
int main()
{

POINT mousePos = GetMouseCurPoint();
std::cout << "mouse position: " << mousePos.x << "," << mousePos.y << std::endl;
}