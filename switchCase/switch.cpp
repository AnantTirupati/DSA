#include <iostream>
using namespace std;
int main(){

char op;
int a,b;

cout << "enter your first number :" << endl;
cin >> a;


cout << "enter your second number :" << endl;
cin >> b;

cout << "enter your operator :" <<endl;
cin>>op;


// using if else
// if (op == "+"){
//     cout << "a + b = " <<(a + b)<<endl;
// }
// else if (op == "-"){
//     cout << "a - b = " <<(a - b)<<endl;
// }
// else if (op == "*"){
//     cout << "a * b = " <<(a * b)<<endl;
// }
// else if (op == "/"){
//     cout << "a / b = " <<(a / b)<<endl;
// }
// else if (op == "%"){
//     cout << "a % b = " <<(a % b)<<endl;
// }
// else {
//     cout << "invalid operator" << endl;

// } 

// using switch
switch(op) {
    case '+':
     cout << a << " + " << b << " = " << a + b;
      break;

    case '-':
      cout << a << " - " << b << " = " << a - b;
      break;

    case '*':
      cout << a << " * " << b << " = " << a * b;
      break;
    
    case '/':
      cout << a << " / " << b << " = " << a / b;
      break;

    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct";
      break;


}


return 0;
    
}