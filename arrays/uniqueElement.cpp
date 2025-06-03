#include <iostream>
using namespace std;
int unique(int arr[], int size){
    int answer=0;
    for(int i=0; i<size; i++){
        answer= answer^arr[i];
    }
    return answer;
}
int main(){
    int arr[] = {2,10,11,13,10,2,15,13,15};
    int size = 9;
    int ans = unique(arr,size);
    cout << ans;
}