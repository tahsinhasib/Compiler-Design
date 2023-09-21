#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s1 = "Tahsin", s2 = "Hasib";
    int size = s1.length() + s2.length() + 1;
    string arr[size];


    // For First name
    int k = 0;
    for (int i=0; i<s1.length()+1; i++) {
        if (i == s1.length()) {
            arr[k] = " ";
            k += 1;
        }
        else {
            arr[k] = s1[i];
            k += 1;
        }
    }

    // For Last name
    for (int i=0; i<s2.length(); i++) {
        arr[k] = s2[i];
        k +=1;
    }

    //Printing the array
    cout << "Full name: ";
    for (int i=0; i<size; i++) {
        cout << arr[i];
    }


    return 0;
}