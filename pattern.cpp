/*
#include<iostream>
using namespace std;
int main()
{
       int n,i,j;
        cin >> n;
        for(i=0;i<=n;i++)
        {
            for(j=(n-i);j>0;j--)
            {
                cout <<" ";
            }
            for(j=0;j<(i*2+1);j++)
            {
                cout <<"*";
            }
            cout <<"\n";
        }
}
*/
/*
#include <iostream>
using namespace std;
int main() {
    int n , a;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        if (i %2==0)
                a=0;
            else
                a=1;
        for(int j=0;j<=i;j++)
        {
            a= 1 -a ;
            cout << a;
        }
        cout << "\n";
    }
    return 0;
}
*/

#include <iostream>
using namespace std;
int main() {
    int n,i,j;
    cin >> n;
    
    for(i=0;i<n;i++)
    {
                
        for(j=0;j<n;j++)
        {
            if(i==0 || i==n-1 || j==0 || j==n-1)
            {
                cout << "*";
            }
            else
            cout << " ";
            }
            cout << "\n";

        }
        cout << "\n";
    return 0;
}

/*
 In the real world we are surronded by humans who can learn everything from their experiences with their leaning,
 capability, and we have computers or machine which worked on instantaneous but a machine also learn experience from past 
 data like humans does.



Ml is much similar to data mining as it also deals with huge amount of the data

NEED FOR MACHINE LEARNING

The need for ML is that it is capable of doing task that are too complex for a person can impliment directly. As a human
we have some limitation as we cannot excess the huge amount of data manually, so called this we need some computer system
and here comes the ML to make things eassy for us 
                                                 We can train machine learning algorithms by providing them the huge amount
of data and let them explore the data , construct the models and predict the required output automatically. The performence of
ML algorithms deepns on the amount of data , and it can be determine by the cost function with the help of 




*/