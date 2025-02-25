#include <iostream>  
using namespace std;  

const int CONVERT_FEET_TO_INCHES = 12;  
const float CONVERT_INCH_TO_METERS = 0.0254f;  
const float CONVERT_WEIGHT_TO_KG = 2.2f;  

int main() {  
    int feet, inches, weight;  
    float height_meters, weight_kg, BMI;  

    cout << "Enter height: Feet Inches (e.g. 5 8 for 5 feet 8 inches):" << endl;  
    cin >> feet >> inches;  

    cout << "Enter weight (in pounds):" << endl;  
    cin >> weight;  

    // 计算总高度（以英寸为单位）  
    int total_inches = feet * CONVERT_FEET_TO_INCHES + inches;  
    // 将高度转换为米  
    height_meters = total_inches * CONVERT_INCH_TO_METERS;  
    // 将体重转换为千克  
    weight_kg = weight / CONVERT_WEIGHT_TO_KG;  

    // 计算BMI  
    BMI = weight_kg / (height_meters * height_meters);  
    cout.precision(2);  
    cout << fixed; // 设置为固定小数位  
    cout << "BMI: " << BMI << endl;  

    return 0;  
}