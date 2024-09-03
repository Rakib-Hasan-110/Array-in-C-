#include <iostream>
using namespace std;

void createSummationArray(int arr[], int newArr[], int n) {
    for (int i = 0; i < n; ++i) {
        newArr[i] = arr[i] + arr[n - 1 - i];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
     cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    int newArr[n];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    createSummationArray(arr, newArr, n);

    cout << "New Array" << endl;
    printArray(newArr, n);

    return 0;
}
