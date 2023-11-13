#include<iostream>
using namespace std;

int main()
{
    // topic bitwise operators
    int a =4,b=6;
    cout << "a&b=" << (a&b) << endl;  // and operator
    cout << "a|b=" << (a|b) << endl;  // or operator
    cout << "a^b=" << (a^b) << endl;  // XOR operator
    cout << "~a=" << ~a << endl;  // compliment of NOt operator

    // shift operator

    cout<< (17>>1) << endl;
    cout<< (17>>2) << endl;
    cout<< (19<<1) << endl;
    cout<< (19<<2) << endl;

    // Increament / Decrement operator
    // i++ example of post increament
    // --1 example of pre decrement operator
    // NOTE :- pre means value will change in same line
    //         post means value will change in next line(i.e after;)


    //fibonacni series

    int n,i=0;
    int p=0,q=1;
    cout << "write number " << endl;
    cin >> n;
    cout <<p<<" "<<q<<" ";
    for(i=0;i<=n;i++)
    {
        int sum = p + q;
        cout << sum << " ";
        p=q;
        q=sum;
    }
    return 0;

}