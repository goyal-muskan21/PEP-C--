#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    for(int i = size-1; i > 0; i--) {
        int hasSwapped = 0;
        for(int j = 0; j < i; j++) { 
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                hasSwapped = 1;
            }
        }
        if(hasSwapped == 0) break;
    }
}

int main() {
    int arr[5] = {30, 7, 20, 1, 5};
    bubbleSort(arr, 5);
    
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
