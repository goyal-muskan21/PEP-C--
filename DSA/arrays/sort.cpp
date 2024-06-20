// #include<iostream>
// using namespace std;

// void sortArray(int arr[], int size){
//      int i = arr[0];
//      int j = arr[size - 1];
//      while(i < j){
//           if(i != j){
//                int temp = i;
//                i = j;
//                j = temp;
//                i++;
//           }
//           else{
//                j--;
//           }
//      }
// }

// int main(){
//      int arr[5] = {0,1,1,0,0};
//      sortArray(arr, 5);
//      cout<<arr[5];
// }

#include<iostream>
using namespace std;

void sortArray(int arr[], int size){
    int left = 0;
    int right = size - 1;

    while(left < right){
        while(arr[left] == 0 && left < right){
            left++;
        }
        while(arr[right] == 1 && left < right){
            right--;
        }
        if(left < right){
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
}

int main(){
    int arr[5] = {0, 1, 1, 0, 0};
    sortArray(arr, 5);
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
}
