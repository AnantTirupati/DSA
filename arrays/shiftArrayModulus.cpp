#include <iostream>
#include <vector>
using namespace std;
void rotate(vector<int>nums, int k){
    int n= nums.size();
    vector<int> ans;
    for(int index=0; index<n;index++){
        int newIndex = (index + k) % n;
        ans[newIndex] = nums[index];
    }
    nums=ans;
}
int main(){
    int k;
    cin>>k;
    vector<int> nums;
    int n;
    cin>> n;
    for(int i=0; i<n; i++){
        int d;
        cin >>d;
        nums.push_back(d);
    }
    rotate(nums,k);
    // for(int i=0; i<n; i++){
    //     cout<< nums[i] << " "; 
    // }
}