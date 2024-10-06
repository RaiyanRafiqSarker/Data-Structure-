#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s1;
    cout<<"INPUT"<<endl;
    getline(cin,s1);
    int count = 0;

    for (int i=0; i<s1.size(); i++) {
        char c =(s1[i]);
        if (c == 'a' ||
            c == 'e' ||
            c == 'i' ||
            c == 'o' ||
            c == 'u') {
                count += 1;
            }
    }
    cout << "vowels appeared " << count << " times.";
    return 0;
}
