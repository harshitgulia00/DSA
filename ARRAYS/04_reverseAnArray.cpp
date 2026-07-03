#include<iostream>
using namespace std;
int main(){
    int start = 0;
    int end = 23;
    int arr[23] = {10, 20, 30, 40, 50, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240};
    while(start < end){
        int temp = arr[start];
        arr[start] = arr [end];
        arr[end] = temp;
        start++;
        end--;
    }
    cout << "Reversed array is: ";
    for(int i = 0; i < 24; i++){
        cout << arr[i] << " ";
    }
    return 0;
}