#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0 ; i<n-2 ; i++){
        for(int j=0 ; j<n; j++){
            cout << "*";
        }
        cout << endl;
    }
}