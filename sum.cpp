/*
#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Write first number"<< endl;
    cin >>a;
    cout << "Write first number"<< endl;
    cin >>b;
    
    cout << "The sum is " << a + b;
    return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main ()
{
    int age;
    cout <<"Enter Your age : ";
    cin >> age;
    if(age>=18)
        cout << "you are adult ";
    else
        cout << "You are not adult ";

    return 0;
    
}
*/

#include <iostream>
using namespace std;

int main()
{
    int i=0,j=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<9;j++)
        {
            if(i+j==4 || i+j==8)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<< endl;
    }
    return 0;
}