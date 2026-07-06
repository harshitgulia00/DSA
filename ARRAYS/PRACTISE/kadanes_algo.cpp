#include<iostream>
#include<climits>
using namespace std;
int main(){
        int arr[7] = {3,-4,5,4,-1,7,8};
        int maxSum = INT_MIN;
        int curSum = 0;
        for(int i = 0; i < 7; i++){
            curSum += arr[i];
            maxSum = max(maxSum,curSum);

            if(curSum < 0){
                curSum = 0;
            }
        }

        cout << "maximum sub-array sum is: " << maxSum << endl;

    return 0;
}