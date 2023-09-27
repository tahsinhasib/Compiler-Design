#include <iostream>
using namespace std;

void storeOperator(string s) {
    for (int i=0; i<s.size(); i++) {
        if (s[i] == '+' ||
            s[i] == '-' ||
            s[i] == '*' ||
            s[i] == '/' ||
            s[i] == '=')
            {
               cout << s[i];
            }
    }
}

int main()
{
    string s; cin >> s;
    storeOperator(s);
}
