#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int size;
    cout << "Enter the number of elements in the array: "<<endl;
    cin >> size;
    int arr[size];
    cout << "Enter the "<<size  <<" elements of the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int element,pos;
    cout << "Enter the insert element in the array: "<<endl;
    cin >> element;
    cout << "Enter the position of insert element in the array: "<<endl;
    cin >> pos;

    //shift elements from pos to the end
    for(int i = size-1;i>=pos;i--){
        arr[i+1] = arr[i];
    }
    //insert element at pos
    arr[pos] = element;
    size++;

    //print the array
    printArray( arr,size);
    return 0;
}
