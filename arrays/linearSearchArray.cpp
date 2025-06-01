#include <iostream>
using namespace std;
//present -> true(1)
//absent -> false(0)

bool linearSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            //found
         return true;
        }
    }
    //not found
    return false;
}
int main(){
    int arr[5]= {4,6,8,10,12};
    int target = 101;
    int size=5;

    bool ans = linearSearch(arr, size, target );
    if(ans==1){
        cout<< "Found";
    }
    else{
        cout << "Not Found";
    }



    // int arr[5]= {4,6,8,10,12};
    // int target = 10;
    // int n=5;

    // bool flag = 0;
    // // 0-> Not Found
    // // 1->  Found

    // for(int i=0; i<n; i++){
    //     if(arr[i] == target){
    //         //found
    //         flag = 1;
    //         break;
    //     }
    // }
    // if(flag == 1){
    //     cout<< "Target Found";
    // }
    // else{
    //     cout << "Target Not Found";
    // }
}