#include <iostream>
using namespace std;
int area(int r){
    int area = 3.14 * r * r;
    return area;
}
int main(){
    int r = 5;
    int ans = area(r);
    cout << ans;
}