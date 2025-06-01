#include <iostream>
using namespace std;

void sum(int n){
    int ans =0;
    for( int i=2; i<=n; i=i+2){
        ans = ans+i;
    }
    cout << ans;
}
int main(){
    sum(10);
}