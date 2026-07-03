#include<iostream>
using namespace std;
int main(){
    int nums[15] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150};
    int target;
    cout << "Enter the target element to search: ";
    cin >> target;
    bool flag = false;
    int index;
    for(int i = 0; i < 15;i++){
        if(nums[i] == target){
            flag = true;
            index = i;
            break;
        }
    }
    if(flag){
        cout << "Element found in the array at index " << index << endl;
    }
    else{
        cout << "Element not found in the array." << endl;
    }
    return 0;
}