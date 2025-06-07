#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void rotate(vector<vector<int>>& matrix){
    int n =matrix.size();
    //transpose
    for(int i=0; i<n; i++){
        for(int j=i; j<matrix[i].size(); j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    //reverse -> 2D matrix ki saari rows ko
    //kitni rows hi to (n-1)
    for(int i=0; i<n; i++){
        //hr row ko reverse krna hi
        //reverse() -> inbuilt/utility function
        reverse(matrix[i].begin(),matrix[i].end());
    }
}