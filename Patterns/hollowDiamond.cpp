#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<< " ";
        }
        int TotalCol= 2*n-2*i-1;
        for(int j=0; j<TotalCol; j++){
            if(j==0 || j==TotalCol-1){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
        }
       cout<< endl;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<< " ";
        }
        int TotalCol= 2*n-2*i-1;
        for(int j=0; j<TotalCol; j++){
            if(j==0 || j==TotalCol-1){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
        }
       cout<< endl;
    }
}