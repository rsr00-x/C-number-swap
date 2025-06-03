//C++ (from IP)
/*#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << endl << endl << "*** Numbers before swapping ***" << endl;
    cout << "First number = " << num1 << " and second number = " << num2;
    //cout<<"Before swap:a="<<a<<"b="<<b<<endl;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << endl << endl << "*** Numbers after swapping ***" << endl;
    cout << "First number = " << num1 << " and second number = " << num2;
    //cout<<"After swap:a="<<a<<"b="<<b<<endl;

    return 0;
}
*/
//Data Structure
//wrong method
//CALL BY VALUE:
/*#include <iostream>
using namespace std;
void swap(int x, int y) {
int temp = x;
x = y;
y = temp;
}
int main() {
int a = 40;
int b = 50;
cout << "Before swap: a = " << a << " b = " << b << endl;
swap(a, b);
cout << "After swap: a = " << a << " b = " << b << endl;
return 0;
}
*/
//Right method
//CALLL by REFERENCE:
#include <iostream>
using namespace std;
void swap(int *a, int *b) {
int temp = *a;
*a = *b;
*b = temp;
}
int main() {
int x = 5;
int y = 10;
cout << "Before swap: x = " << x << " , y = " << y << endl;
swap(&x, &y);
cout << "After swap: x = " << x << ", y = " << y << endl;
return 0;
}
