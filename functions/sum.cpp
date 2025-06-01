#include <iostream>
using namespace std;
void sum(int n){
    int ans = 0;
    for (int i=1; i<=n; i++){
        ans = ans + i;
    }
    cout << ans;
}
int main(){
    sum(10);
}