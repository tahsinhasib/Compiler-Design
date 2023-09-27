#include <iostream>
#include <string.h>
using namespace std;

void checkNumeric(string s) {
    bool check = true;
    for (int i=0; i<s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            check = true;
        }
        else {
            check = false;
            cout << "Number is not Numeric" << "\n";
            break;
        }

    }
    if (check == true) {
        cout << "Number is Numeric" << "\n";
    }
}


int main()
{
    string s; cin >> s;
    checkNumeric(s);

    return 0;
}
