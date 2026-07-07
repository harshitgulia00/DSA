#include<iostream>
#include<vector>
using namespace std;
int main(){
    int target = 26;
    vector<int> vec = {2,7,11,15};
    vector<int> ans;
    int i = 0;
    int j = vec.size() - 1;  
    while(i < j){
        if(vec[i] + vec[j] == target){
            ans.push_back(i);
            ans.push_back(j);
            cout << ans[0] << " " << ans[1] << endl;
            break;
        }
        else if(vec[i] + vec[j] < target){
            i++;
        }
        else{
            j--;
        }
    }  
    return 0;
}