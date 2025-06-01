#include <iostream>
using namespace std;
int main(){
     int a = 4;
    int b = 6;

    cout << "not" << ~a << endl;
    cout << (~a) << endl;
    cout << ~(a) << endl;
    cout << "xor" << (a^b) << endl;
    cout << "and" << (a&b) << endl;
    cout << "or" <<(a|b) << endl;

    //left shift and right shift

    cout << (17>>1) << endl;
    cout << (17>>2) << endl;
    cout <<(19<<1) << endl;
    cout << (21<<2) << endl;
    (++a);
    (b++);
    cout << a << endl;
    cout << b <<endl;
     cout << (++a)<< endl;
    cout << (a++) <<endl;
     cout << (--a)<< endl;
    cout << (a--) <<endl;
    cout <<a <<endl;
    (--a);
    (b--);
    cout << a << endl;
    cout << b <<endl;
    
}