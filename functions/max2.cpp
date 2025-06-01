#include <iostream>
using namespace std;
int maxNo(int n1, int n2, int n3){
    int ans = max(n1,n2);
    int sol = max(ans,n3);
    // cout<< sol ;
    return sol;
}
int main(){
    int maximum = maxNo(90,99,97);
cout<< maximum;
}