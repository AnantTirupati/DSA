#include <iostream>
using namespace std;
void solve(int arr[], int n){
    int countZero=0;
    int countOne=0;
    int countTwo=0;
    for(int i=0; i<n ; i++){
        if(arr[i]==0){
            countZero++;
        }
        else if(arr[i]==1){
            countOne++;
        }
        else if(arr[i]==2){
            countTwo++;
        }
    }
    int index=0;
    while(countZero--){
        arr[index]=0;
        index++;
    }
    while(countOne--){
        arr[index]=1;
        index++;
    }
    while(countTwo--){
        arr[index]=2;
        index++;
    }

    
}
int main(){
    int arr[]={0,2,0,0,2,1,1,2,2,0,2,1,0};
    int n=13;
    solve(arr,n);
    for(int i=0; i<n; i++){
        cout << arr[i]<< " ";
    }
}