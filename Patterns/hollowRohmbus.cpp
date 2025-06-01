#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for (int i=0; i<n; i++){
        //inverted half pyramid 1
        for(int j=0; j<n-i; j++){
            cout<< "* ";
        }
        //full pyramid
        for(int j=0; j<2*i+1; j++){
            cout<< " ";
        }
        //inverted half pyramid 2
        for(int j=0; j<n-i; j++){
            cout<< "* ";
        }
        cout<<endl;
    }
    for (int i=0; i<n; i++){
        //inverted half pyramid 1
        for(int j=0; j<i+1; j++){
            cout<< "* ";
        }
        //full pyramid
        for(int j=0; j<2*n-2*i-1; j++){
            cout<< " ";
        }
        //inverted half pyramid 2
        for(int j=0; j<i+1; j++){
            cout<< "* ";
        }
        cout<<endl;
    }
}