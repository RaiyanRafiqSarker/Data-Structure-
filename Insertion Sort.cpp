#include <iostream>
using namespace std;

void Swap(int arr[],int m, int n){
    int temp = arr[m];
    arr[m] = arr[n];
    arr[n] = temp;
}

void InsertionSort(int arr[], int length){
    int i,v,j;
    for(i=1;i<length;i++){
        v = arr[i];
        j = i-1;
        while(j>=0 && arr[j] > v){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = v;

    }
}

void printArr(int arr[],int length){
    for(int i=0;i<length;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {62,43,76,45,34,90,66};
    int length = 7;
    printArr(arr,length);
    InsertionSort(arr,length);
    printArr(arr,length);


    return 0;
}
