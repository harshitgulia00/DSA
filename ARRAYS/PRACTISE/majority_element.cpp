#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    //=============================> BRUTE-FORCE <=============================
    // int arr[9] = {3,3,4,2,4,4,4,4,2};
    // int n = 9;
    // int count = 0;
    // for(int i = 0; i < n; i++){
    //     count = 0;
    //     for(int j = 0; j < n; j++){
    //         if(arr[i] == arr[j]){
    //             count++;
    //         }
    //     }
    //     if(count > n/2){
    //         cout << "majority element is: " << arr[i] << endl;
    //         break;
    //     }
    // }

    //=============================> OPtimal One <=============================
    // vector<int> arr = {3,3,4,2,4,4,4,4,2};
    // int n = arr.size();
    // int count = 0;
    
    // sort(arr.begin(), arr.end());
    // for(int i = 0; i < n; i++){
    //     if(arr[i] == arr[n/2]){
    //         cout << "majority element is: " << arr[i] << endl;
    //         break;
    //     }
    // }

    //=============================> MOORE'S VOTING ALGORITHM {MOST OPTIMISED ALGORITHM} <=============================
    vector<int> arr = {3,3,4,2,4,4,4,4,2};
    int n = arr.size();
    int count = 0;
    int ans = 0;
    for(int i = 0;i < n;i++){
        if(count == 0){
            ans = arr[i];
        }
        if(arr[i] == ans){
            count++;
        }else{
            count--;
        }
    cout << count << "    ";
    }
    cout << "\n" << "majority element is: " << ans << endl;
    return 0;
}
