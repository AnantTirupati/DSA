#include <iostream>
#include <vector>
using namespace std;
void solve (vector<int>& v){//&call by reference
    int index=0;
    int n= v.size();
    int left=0;
    int right = n-1;
    for(index=0; index<=right; index++){
        if(v[index]==0){
            swap(v[index],v[left]);
            left++;
            index++;
        }
        else if(v[index]==2){
            swap(v[index],v[right]);
            right--;
        }
    }
    }
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int d;
        cin>>d;
        v.push_back(d);
    }
    solve(v);
    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }

}