#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[n] = {1,2,-4,5};

    //  ==========================> how to create sub-array <===========================
    // for(int start = 0; start < n; start++){
    //     for(int end = start; end < n; end++){
    //         for(int k = start; k <= end; k++){
    //             cout<<arr[k]<<" ";
    //         }
    //         cout<< " ";
    //     }
    //     cout<<endl;
    // }

    //  ==========================> Brute-Force for maximum sub-array sum <===========================
    int max_sum = arr[0];
    for(int i = 0; i < n; i++){
        int currentSum = 0;
        for(int j = i;j < n;j++){
            currentSum += arr[j];
            max_sum = max(max_sum,currentSum);
        }
    }
    cout << "Maximum sub-array sum is: " << max_sum << endl;
    return 0;
}