#include <iostream>
using namespace std;
int main(){
    int i,j,n,num;
    // cin>>num;
    cin >> n;
    // n = num/2;

    for (i=0 ; i<n ; i++){
        for (j=0 ; j<n-i-1; j++){
            cout<< " ";
        }
        for (j=0 ; j<i+1 ; j++){
            cout << "* ";
        }
        cout<< endl;
    }
    // cout<< endl;
    for (i=0 ; i<n ; i++){
        for(j=0 ; j<i ; j++){
            cout << " ";
        }
        for (j=0; j<n-i; j++){
            cout<< "* ";
        }
        cout<<endl;
    }
}