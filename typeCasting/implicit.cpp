#include <iostream>
using namespace std;
int main(){
    // implicit - compiler automatic converts the values
    // implicit conversion from int to float anf vice versa
    int a = 10;
    float b= 5.5;
    cout<< a+b <<endl;
    //compiler converts int into float since float can store more info 
    int sum= a+b;
    cout<< sum << endl;
    // compiler still converts but since we asked the sum to be in int it converts resulted float value in int

    //implicit conversion from char to int
    char ch = 'A';
    int d = ch+ 1;
    cout << d  << endl;
    
    //implicit conversion from int to char
    int c=97;
    char character = c;
    cout << character << endl;

    
}