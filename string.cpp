/*
#include <iostream>
using namespace std ;

int main ()
{
    string str;
    // for getting multiple words in same string
    getline(cin,str);
    cout << str;
    return 0;
}
*/

#include <iostream>
using namespace std ;

int main ()
{
    string s = {'a','n','a','n','d'}; // "Anand"
    int len = s.size();
    cout << s[len - 1];
    return 0;
}

