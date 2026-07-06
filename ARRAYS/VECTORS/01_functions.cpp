#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec = {10, 20, 30, 40};

    cout << "Original vector size is: " << vec.size() << endl;

    vec.push_back(23);
    vec.push_back(45);

    vec.pop_back();

    cout << vec.front() << "  ";
    cout << vec.back() << endl;;

    for(int i : vec){
        cout << i << "  ";
    }
    cout << endl;
    for(int i = 0;i < vec.size();i++){
        cout << vec.at(i)  << "  ";
    }
    cout << endl;
    for(int i = 0;i < vec.size();i++){
        cout << vec[i]  << "  ";
    }

    return 0;
}