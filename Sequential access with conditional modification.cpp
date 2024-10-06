#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s = "I am a student";
    int j = 2;
    int count = 0;
    for (int i=0; i<=s.size(); i++) {
        if (count == j) {
            char c = s[i];
            int temp = int(c);
            temp += j;
            s[i] = char(temp);
            count = -1;
        }
        count += 1;
        cout << s[i];
    }

    return 0;
}
