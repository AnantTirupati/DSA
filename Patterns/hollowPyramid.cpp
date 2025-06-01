#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    for (int row=0; row<n; row=row+1){
        //preceeding spaces
        for (int col=0; col<n-row-1; col=col+1){
            cout<<" ";
        }
        //stars
        for(int col=0; col<row+1; col=col+1){
            //print star for first and last col
            if(col==0 || col==row+1-1){
                cout << "* ";
            }
            //print space b/w firstcand last col
            else{
                cout<< " ";
            }
        }
        cout<<endl;
    }
}