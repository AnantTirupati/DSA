#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    for( int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<< " ";
        }
        //stars
        int totalCol= 2*n-2*i-1;
        for(int j=0; j<totalCol; j++){
            //if first or last col
            if(j == 0 || j==totalCol-1){
                cout<< "* ";
            }
            else{
                cout<< " ";
            }
        }
        cout<<endl;
    }
}