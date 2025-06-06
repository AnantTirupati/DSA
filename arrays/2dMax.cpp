#include <iostream>
#include <limits.h>
using namespace std;
int findMax(int arr[][4], int row, int col){
    //ans store variable
    int max= INT_MIN;
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>max){
                max = arr[i][j];
            }
        }
    }
    return max; 
}
int findMin(int arr[][4], int row, int col){
    //ans store variable
    //int min = INT_MAX
    int min= arr[0][0];
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]<min){
                min = arr[i][j];
            }
        }
    }
    return min;
}
int main(){
    int arr[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,70}
    };
    int row =3;
    int col=4;
   
    int ans = findMax(arr,row,col);
    cout << "Max element: "<< ans << endl;
    cout << "Min element: "<< findMin(arr,row,col);
}
