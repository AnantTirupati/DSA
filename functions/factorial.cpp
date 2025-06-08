#include <iostream>
using namespace std;
int factorial(int n){
       int factorial = 1;
       if(n ==0){
        factorial = 1;
       }
       else if(n<0){
        cout << "factorial of -ve no doesn't exist" << endl;
       }
       else{
        for(int i=1; i<=n; i++){
            factorial = factorial*i;
        }
       }
       return factorial;
        
}
int main(){
    int n;
    cin >> n;
    int ans = factorial(n);
    cout << ans;
}