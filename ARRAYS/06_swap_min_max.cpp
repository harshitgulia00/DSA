#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int min = arr[0];
    int max = arr[0];
    for(int i = 0; i < 5; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }
    for(int i = 0; i < 5; i++){
        if(arr[i] == min){
            arr[i] = max;
        }
        else if(arr[i] == max){
            arr[i] = min;
        }
    }
    cout << "Array after swapping min and max elements: ";
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }   
    return 0;
}