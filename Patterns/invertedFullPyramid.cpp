#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>> n;

    for (i=0 ; i<n ; i++){
        //for spaces
        for (j=0 ; j<i ; j++){
            cout << " ";
        }
        //for stars
        for (j=0 ; j<n-i ; j++){
            cout << "* ";
        }
        cout << endl;
    }
}