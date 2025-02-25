#include<iostream>
using namespace std;
float fun_1(double light)
{
    double units = light * 63240;
    return units;
    
}
int main()
{
    double light;
    cout<<"Enter the number of light years:";
    cin>>light;
    cout<<light<<" light years = "<<fun_1(light)<<" astronomical units"<<endl;
    return 0;
}