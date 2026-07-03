#include<iostream>
using namespace std;
int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0;    
    int product = 1;
    for(int i = 0; i < 5; i++){ 
        sum += arr[i];
        product *= arr[i];
    }   
    cout << "Sum of the elements in the array is: " << sum << endl;
    cout << "Product of the elements in the array is: " << product << endl; 
    return 0;
}