#include <iostream>
using namespace std;
int main(){
    int arr[5];
    int n= 5;
    for(int i=0; i<n; i++){
        cout<< "enter : " <<i<<endl;
        cin >> arr[i];
        cout<< endl;
    }
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
       
    }
    
}