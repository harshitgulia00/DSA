#include<iostream>
#include<vector>
using namespace std;

int BS(vector<int> arr, int target,int low,int high){
    if(low > high){
        return -1;
    }
    int mid = low + (high - low) / 2;
    if(arr[mid] == target){
        return mid;
    } else if(arr[mid] < target){
        return BS(arr, target, mid + 1, high);
    } else {
        return BS(arr, target, low, mid - 1);
    }
}

int main(){
    std::vector<int> arr = {1, 2, 3, 4, 5};
    int target = 5;
    int low = 0;
    int high = arr.size() - 1;
    // while(low <= high){
    //     int mid = low + (high - low) / 2;
    //     if(arr[mid] == target){
    //         std::cout << "Element found at index: " << mid << std::endl;
    //         break;
    //     } else if(arr[mid] < target){
    //         low = mid + 1;
    //     } else {
    //         high = mid - 1;
    //     }
    // }

    int result = BS(arr, target, low, high);
    if(result != -1){
        std::cout << "Element found at index: " << result << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }
    return 0;
}