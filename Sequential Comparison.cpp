#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s1[]="john";

    char s2[]="johne";

             if (strcmp(s1,s2) == 0)
        cout << "Both the input strings are equal." << endl;
    else
        cout << "The input strings are not equal." << endl;
        return 0;
}
