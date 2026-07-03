#include<iostream>
using namespace std;
int main(){
    int num[] = {10, 20, 30, 40, 50};
    int largest = num[0];
    int smallest = num[0];
    for(int i = 0;i<sizeof(num)/sizeof(num[0]);i++){
        if(num[i] > largest){
            largest = num[i];
        }
        if(num[i] < smallest){
            smallest = num[i];
        }
    }
    cout << "Largest element: " << largest << endl;
    cout << "Smallest element: " << smallest << endl;
    return 0;
}

// can be done with min max functions as well as comparison with largest and smallest variables. as of INT_MIN and INT_MAX. 
// -->  min(arg1,arg2) and max(arg1,arg2) functions can be used to find the smallest and largest elements in an array.