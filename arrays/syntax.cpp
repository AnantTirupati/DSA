#include <iostream>
using namespace std;
int main(){
    // int arr[12];
    // char alpha[90];
    // bool flags[5];
    // long num[9];
    // short no[4];
     int arr[5] = {4,3,2,3,2};
     int brr[] = {4,6,5,32,64,35,35,54,654,65,6,9,0,8,78,67};
     int crr[5]={2,9};
    //  int drr[2] = {2,4,5,6};  error: too many initializers for 'int [2]'
     cout << arr[1]<< endl;
    //  for(int i=0; i<=arr[i]; i++){
    //     cout<< arr[5]<< endl;
    //  }
     cout<< &arr <<endl; //address
     cout<< arr <<endl;  //address
     cout<< sizeof(arr) ; //size
}