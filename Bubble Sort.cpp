#include <iostream>
using namespace std;

void Swap(int arr[], int m, int n) {
    int temp = arr[m];
    arr[m] = arr[n];
    arr[n] = temp;
}

void printArray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void BubbleSort(int arr[], int length) {
    int swapCount;
    for (int i = 0; i < length - 1; i++) {
        swapCount = 0;
        for (int j = 0; j < length - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                Swap(arr, j, j + 1);
                swapCount++;
            }
        }
        cout << "Round = " << i << endl;
        if (swapCount == 0)
            break;
    }
}

int main() {
    int arr[] = {62, 43, 76, 45, 34, 90, 66};
    int length = 7;
    cout << "Original array: ";
    printArray(arr, length);

    BubbleSort(arr, length);

    cout << "Sorted array: ";
    printArray(arr, length);

    return 0;
}
