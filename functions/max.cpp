#include <iostream>
using namespace std;
void maxNo(int a, int b, int c){
    if(a>=b && a>=c){
        cout << a;
    }
    else if(b>=a && b>=c){
        cout << b;
    }
    else{
        cout <<c;
    }
}
int main(){
    maxNo(8,11,99);
}