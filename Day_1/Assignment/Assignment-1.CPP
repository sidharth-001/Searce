#include <iostream>
using namespace std;

void reverseArray(int arr[], int size){
    for(int i=0, j=size-1; i<size/2; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<", ";
    }
}

int main(){
    int size;
    //int arr[] = {1,2,4,5};
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    reverseArray(arr, size);
	return 0;
}