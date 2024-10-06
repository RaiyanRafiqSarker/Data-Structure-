#include <iostream>
using namespace std;

void Swap(int arr[], int m, int n) {
    int temp = arr[m];
    arr[m] = arr[n];
    arr[n] = temp;
}

void SelectionSort(int arr[], int length) {
    for (int i = 0; i < length - 1; i++) {
        int k = i; // the minimum value
        for (int j = i + 1; j < length; j++) {
            if (arr[j] < arr[k])
                k = j;
        }
        if (i != k) {
            Swap(arr, i, k);
        }
    }
}

void printArr(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {62, 43, 76, 45, 34, 90, 66};
    int length = 7;

    cout << "Original array: ";
    printArr(arr, length);

    SelectionSort(arr, length);

    cout << "Sorted array: ";
    printArr(arr, length);

    return 0;
}
