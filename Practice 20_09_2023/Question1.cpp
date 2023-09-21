#include <iostream>
using namespace std;
int main()

{
    int arr[5] = {1,2,3,4,5};
    int sum = 0;
    float avg = 0;
    int size = sizeof(arr)/sizeof(int);

    for (int i=0; i<size; i++) {
        sum += arr[i];
    }

    avg = sum / size;
    cout << "Average is: " << avg;
    return 0;
}