#include <iostream>
using namespace std;
int main(){
    int n;
    cin >>n;

    for (int i=0; i<n; i++){
        //inner loop
        for(int j=0; j<2*i+1; j++){
            //odd cols
            if(j%2==1){
                cout<< " * ";
            }
            else{
                cout<< i+1;
            }
        }
        cout << endl;
    }
    //without even odd
    for (int i=0; i<n; i++){
        int totalCol=i+1;
        for(int j=0; j<totalCol; j++){
            if(j==totalCol-1){
                cout<< i+1;
            }
            else{
                cout <<i+1 << "*";
            }
        }
        cout<< endl;
    }
     for (int i=0; i<n; i++){
        
        for(int j=0; j<n-i; j++){
            if(j==n-1){
                cout<< n-i;
            }
            else{
                cout <<n-i << "*";
            }
        }
        cout<< endl;
    }
}