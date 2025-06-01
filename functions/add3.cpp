#include <iostream>
using namespace std;
void printSum(int a, int b, int c){
    int sum = a+b+c;
    cout << "Sum is: " << sum << endl;
}
int main(){
    printSum(3,4,7);
    return 0;
}