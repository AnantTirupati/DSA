#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> v){
    int size = v.size();
    cout << "Printing Vector: ";
    for(int i=0; i<size; i++){
        
        cout << v[i] << " ";
    }
    cout << endl;
}
int main(){
    vector<int> v;
    //insert
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    print(v);
    //pop -> delete // delete hmesha end se start hota hi
    v.pop_back();
    print(v);
    v.pop_back();
    print(v);
}