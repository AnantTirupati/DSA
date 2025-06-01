#include <iostream>
using namespace std;
int main(){
    int arr[10];
    int n=10;
    for(int i=0; i<n; i++){
        cout<< "Enter : "<<i<< endl;
        cin>> arr[i];
        cout<< endl;
    }
    cout<< "before doubling" <<endl;
    for(int i=0; i<n; i++){
       cout<< arr[i] << " ";
       cout << endl;
    }
    for(int i=0; i<n; i++){
        arr[i] = arr[i] * 2;
    }
    cout << "After Doubling"<< endl;
    for(int i=0; i<n; i++){
       cout<< arr[i] << " ";
    }

}