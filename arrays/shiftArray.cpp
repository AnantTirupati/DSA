#include <iostream>
#include <vector>
using namespace std;
void shift(vector<int>& v, int k){
    int n=v.size();
    vector<int> temp;
    for(int i=n-k; i<n;i++){
        temp.push_back(v[i]);
    }
    for(int i=n-1; i>=1; i--){
        v[i]=v[i-k];
    }
    for(int i=0; i<k; i++){
        v[i] = temp[i];
    }
    
}
int main(){
    vector<int> v;
    cout<< "Enter k: "<< endl;
    int k;
    cin>> k;
    cout<<  "Enter array size: "<< endl;
    int n;
    cin>> n;
    cout<< "Enter elements: "<< endl;
    for(int i=0; i<n; i++){
        int d;
        cin>> d;
        v.push_back(d);
    }
    shift(v,k);
    for(int i=0; i<n;i++){
        cout<< v[i] << " ";
    }
    return 0;
}