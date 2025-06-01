#include <iostream>
using namespace std;
//true if prime
//false if not prime
bool check(int n){
    for(int i=2; i<n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    bool prime= check(5);
    if(prime){
        cout<<"Prime Number";
    }
    else{
        cout<< "Not Prime";
    }
}