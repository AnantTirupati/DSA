#include <iostream>
using namespace std;
void twoSum(int a[], int n, int target){
    for(int i=0;i<n;i++){
        for(int j=n-1; j>=0; j--){
            if(a[i]+a[j] == target){
                cout<< target;
                break;
            }
        }
    }
}
int main(){
    
    cout << "enter size of array: "<< endl;
    int n;
    cin >> n;
    int * arr = new int[n];
    cout<< "Enter elements of array: "<< endl;
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    cout << "Enter Target: "<< endl;
    int target;
    cin>>target;

    twoSum(arr,n,target);


}??