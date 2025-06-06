#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[5];
    //creating vector
    vector<int> ar;
    // vector<int> v(5);  //init with 5 size
    // vector<int> ar(5,69); //init with 5 size and all elements be 69
    //vector<int> arr3= {1,2.3.4};
    //vector<int> arr4{1,2.3.4};
    // cout << "size of vector :" << ar.size() <<endl;
    // cout << "printing vector" << endl;
    // for(int i=0;i<ar.size();i++){
    //     cout<< ar[i]<<" ";
    // }

    //insert
    // ar.push_back(4);
    // ar.push_back(9);
    // ar.push_back(7);
    // ar.push_back(76);
    // cout << ar.size() <<endl;
    // //function to check if vector is empty
    // cout <<ar.empty()<< endl;

    //2D Vector
    vector< vector<int> > a(5, vector<int>(10,1));
    //row size -> arr.size()
    //col size -> jis rowpr khade hiuska size arr[i].size -> ith row ke col ka size
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[i].size();j++){
             cout<<a[i][j]<< " ";
        }
        cout<< endl;
    }


}