#include <iostream>
#include <vector>
using namespace std;
int main(){
    //check what is size of an empty vector
   // vector<int> vec();  // ❌ This is NOT a vector. It's a function declaration!
    //This line does not create a vector. Instead, it declares a function named vec that takes no arguments and returns a vector<int> — known as the "most vexing parse" in C++.
//Just remove the parentheses:
    vector<int> vec; // ✅ Correct: creates an empty vector
    cout << vec.size();
}