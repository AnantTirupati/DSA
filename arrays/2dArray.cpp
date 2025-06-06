#include <iostream>
using namespace std;
void printArr(int arr[][4], int row, int col){
    for(int i=0;i<row; i++){
        for(int j=0; j<col ; j++){
            cout<< arr[i][j]<< " ";
        }
        cout<< endl;
    }
}
int main(){
    //create a 2-D array
    //int arr[3][4];

    //initialize
    int arr[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int row =3;
    int col =4;
    printArr(arr,row,col);
    //access
    cout<< arr[0,0]<<endl;
    cout<< arr[0][0]<<endl;
    cout<< arr[1][1]<< endl;
    cout<< arr[2][0]<< endl;
    cout<< arr[1][0]<< endl;
    cout<< arr[0][1]<< endl;
    

    
}