#include <iostream>
using namespace std;

void shiftArrayLeft(int arr[], int size, int shift) {
   shift %= size;
   int temp[size]; // Initialize a temporary array with zeros
    for (int i = 0; i < size; ++i) {
            temp[i] = arr[(i + shift)%size];
    }
    for (int i = 0; i < size; ++i) {
        arr[i] = temp[i];
    }
}

void shiftArrayRight(int arr[], int size, int shift) {
    shift %= size;
    int temp[size] ; // Initialize a temporary array with zeros
    for (int i = 0; i < size; ++i) {
            temp[(i + shift)%size] = arr[i];
    }
    for (int i = 0; i < size; ++i) {
        arr[i] = temp[i];
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size, shift, direction;

    cout << "Enter the number of elements in the array: "<<endl;
    cin >> size;
    int arr[size];
    cout << "Enter the "<<size  <<" elements of the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    cout << "Enter the number of positions to shift: "<< endl;
    cin >> shift;
    cout << "Enter the direction to shift(0 for right, 1 for left): "<< endl;
    cin >> direction;

   if (direction == 1) {
        shiftArrayLeft(arr, size, shift);
    } else {
        shiftArrayRight(arr, size, shift);
    }
    cout << "Shifted Array" << endl;
    printArray(arr, size);

    return 0;
}
