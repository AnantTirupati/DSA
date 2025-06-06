#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> v){
    cout<< "Printing Array: "<< endl;
    for(int i=0; i<v.size();i++){
        cout << v[i]<< " ";
        // cout << v.at(i)<< " "; //vector ke ith elem me jo hi
    }
    cout << endl;
}
int main(){
    vector<int> v;
    int n;
    cin>> n;
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        v.push_back(d);
    }

    //adding more than n elemets
    for(int i=0;i<3;i++){
        v.push_back(69);
    } 
    print(v);

    //to clear vector
    v.clear();
    v.push_back(69);
    print(v);
}