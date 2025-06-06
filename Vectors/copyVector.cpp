#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> v){
    cout << "Printing Vector: "<< endl;
    for(int i=0;i<v.size();i++){
        cout << v[i]<<" ";
    }
    cout << endl;
}
int main(){
    vector<int> arr4 ={1,2,3,4,5};
    vector<int> arr5(arr4);
    arr5.push_back(69);
    print(arr5);
}