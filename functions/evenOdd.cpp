#include <iostream>
using namespace std;
void check(int n){
    if(n%2==0){
        cout << "Even";
    }
    else{
        cout << "Odd";
    }
}
int main(){
    check(10);
}