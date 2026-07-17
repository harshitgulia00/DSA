#include<iostream>
#include<vector>
int main(){
    std::vector<int> arr = {1, 2, 3, 4, 5};
    int target = 5;
    int low = 0;
    int high = arr.size() - 1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == target){
            std::cout << "Element found at index: " << mid << std::endl;
            break;
        } else if(arr[mid] < target){
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return 0;
}