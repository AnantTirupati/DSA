#include <iostream>
using namespace std;
void counting(int arr[], int n){
    int zeroCount=0;
    int oneCount=0;
    //step1: count 0's and 1's
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zeroCount++;
        }
        if(arr[i]==1){
            oneCount++;
        }
    }
    // //step2: place all zeroes first
    // int i;
    // for(i=0 ; i<zeroCount; i++){
    //     arr[i] = 0;
    // }

    // //for rest of places in array place ones   //rest places = n-zerocount therefore intializing this loop from i till <n
    // for(int j=i; j<n; j++){
    //     arr[j]=1;
    // }

    //Easy WAY
    int index=0;
    while(zeroCount--){
        arr[index]=0;
        index++;
    }
    while(oneCount--){
        arr[index]=1;
        index++;
    }
    // cout<<"Zeroes: "<<  zeroCount << endl;
    // cout << "Ones :" << oneCount << endl;
}
int main(){
    int arr[]={0,1,0,1,1,0,0,0,0};
    int n = 9;
    counting(arr,n);

    //printing the array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}