#include <iostream>
#include <limits.h>
using namespace std;

int minimum(int arr[], int size){
    int minAns = INT_MAX;

    for(int i=0; i<size; i++){
        if(arr[i]<minAns){
            minAns = arr[i];
        }
    }
    return minAns;
}

int main(){
    int arr[] = {7,30,99,54,34,64,9,-58};
    int size = 8;
    int min = minimum(arr,size);
    cout << "Minimum No. Is : "<< min<<endl;
}