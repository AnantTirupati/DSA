#include <iostream>
using namespace std;
int main(){
    int arr[5];
    int n = 5;
    for(int i=0; i<n; i++){
        cout<< "Enter : "<< i <<endl;
        cin>> arr[i];
        cout << endl;
    }
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
        cout << endl;
    }
    int sum= 0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    cout << sum;
    
}