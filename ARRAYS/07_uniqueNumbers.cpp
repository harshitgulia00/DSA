#include<iostream>
using namespace std;
int main(){
    int arr[10] = {1, 2,2,2,2, 3, 4,4,4, 5};
    cout << "Unique numbers in the array are: ";
    for(int i = 0; i < 10; i++){
        bool isunique = true;
        for(int j=0; j < 10; j++){
            if(i != j && arr[i] == arr[j]){
                isunique = false;
                break;
            }
        }
        if(isunique){
            cout << arr[i] << " ";
        }
    }
    return 0;
}