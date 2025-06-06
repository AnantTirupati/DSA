#include <iostream>
#include <vector>
using namespace std;
void print2(vector<int>v){
    cout<< "printing: "<< endl;
    for(auto it:v){
        cout<< it<< " ";
    }
    cout << endl;
}
int main(){
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    print2(v);
}