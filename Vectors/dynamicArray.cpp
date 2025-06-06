#include <iostream>
using namespace std;
void fun(int a[],int n){
    for(int i=0;i<n;i++){
        cout << a[i]<< " ";
    }
}
int main(){
    //static memory alllocation of array
    // int arr[5] ={1,2,3,4,5};

    //dynamic 
    int n;
    cin >> n;
    int * arr = new int[n]; // by default elements will be 0 or garbage

    //taking n elements input and inserting in array
    for(int i=0;i<n;i++){
        // int  data;
        // cin>>data;
        // data = arr[i];
        cin>> arr[i];
    }
    cout << "printing array" << endl;
    fun(arr,n);
}