#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "enter the element at index " << i << ": ";
        cin >> arr[i];
    }
    cout << "elements of the array are: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}