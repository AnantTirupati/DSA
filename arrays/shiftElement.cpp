#include <iostream>
using namespace std;
void shiftArr(int arr[],int n){
    //step1
    int temp = arr[n-1];
    // step2
    for (int i=n-1; i>=1 ; i--){
        arr[i]=arr[i-1];
    }
    //step3
    arr[0]=temp;
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int n=6;

    shiftArr(arr,n);

    //print
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
}