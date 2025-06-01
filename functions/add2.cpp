#include <iostream>
using namespace std;
int addNumbers(int a, int b, int c)
{
    int sum = a + b + c;
    return sum;
}
int main()
{

    // cout << addNumbers(9,9,9) << endl;
    int ans = addNumbers(9, 9, 9);
    cout << ans;

    return 0;
}