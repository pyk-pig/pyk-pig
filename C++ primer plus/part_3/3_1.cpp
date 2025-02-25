#include<iostream>
using namespace std;
const int consert_word = 12;
int main()
{
    int high,consert_high;
    cout << "Enter a positive integer:____\b\b\b\b ";
    cin >> high;
    consert_high = high*consert_word;
    cout << "The number after converting to concert words is: " << consert_high << endl;
    return 0;
}