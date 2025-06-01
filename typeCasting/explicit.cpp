#include <iostream>
using namespace std;
int main(){
    //explicit- users declares the conversion
    int a=10;
    float b=5.5;
    float result = a + (int)b;
    cout<< result << endl;

    //double to integer
    double pi = 3.14159265;
    int intpi = (int)pi;
    cout<<intpi<<endl;

    //float to char
    float num = 65.5;
    char ch = (char)num;
    cout<<ch<<endl;

    //int to float
    int c=10;
    int d=3.0;
    float e = c/(float(d));
    float f = c/d;
    cout<<f<<endl;
    cout<<e<<endl;

}