#include <iostream>
using namespace std;
void prime(int n){
    for(int i=2; i<=n; i++){
        if(n%i==0){
            continue;
        }
        else{
            cout<< i;
        }
    }
}
int main(){
    int n;
    cin >> n;
    prime(n);
}