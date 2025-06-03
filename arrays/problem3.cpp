#include <iostream>
using namespace std;
void countZeroOne(int arr[], int size){
    int countingZero = 0; //starting count from 0
    int countingOne = 0; //starting count from 0

    for(int i=0; i<size; i++){
        if(arr[i] == 0){
            countingZero++;
        }
        if(arr[i]==1){
            countingOne++;
        }
    }
    cout<< "ZeroCount : "<< countingZero << endl;
    cout<< "OneCount : " << countingOne <<endl;
}
int main(){
    int arr[]={0,1,0,1,0,1,0,1,0,1};
    int size = 10;
    countZeroOne(arr,size);
}