#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string s1;
    cout<<"type anything"<<endl;
     getline(cin,s1);
    string s2;
        cout<<"type anything again"<<endl;
             getline(cin,s2);


    cout << s1 + s2;
    return 0;
}
