#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
vector<int> rowAndMaxOnes(vector<vector<int>>& mat){
    vector<int> ans;
    int n = mat.size();
    //oneCount -> will store max no. of 1's in a row
    int oneCount = INT_MIN;
    //rowNo -> will store index of  max no. of 1's wali row
    int rowNo;
    for(int i=0; i<n; i++){
        //har row ke initialize hone se phle initialize count with 0
        int count =0;
        for(int j=0; j<mat[i].size(); j++){
            //if 1 found then increament count
            if(mat[i][j]==1){
                count++;
            }
        }
        //after row completion, compare with oneCount
        if(count> oneCount){
            oneCount= count;
            rowNo = i;
        }
    }
    ans.push_back(rowNo);
    ans.push_back(oneCount);
    return ans;
}