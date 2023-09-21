#include <iostream>
using namespace std;
int main()

{
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);

    int max = arr[0];
    int min = arr[0];

    for (int i=0; i<size; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    cout << "Max is: " << max << "\n";
    
    for (int i=0; i<size; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    cout << "Min is: " << min << "\n";

    return 0;
}