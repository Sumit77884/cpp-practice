#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
    arr.push_back(22);
    arr.push_back(11);
    arr.push_back(55);
    arr.push_back(66);
    arr.push_back(77);
    for(int a: arr){
        cout<< a<<" ";
    }
    cout<<endl;
    make_heap(arr.begin(),arr.end());
    for(int a: arr){
        cout<< a<<" ";
    }
    cout<<endl;
    push_heap(arr.begin(),arr.end());
    for(int a: arr){
        cout<< a<<" ";
    }
    cout<<endl;
    arr.push_back(17);
    for(int a: arr){
        cout<< a<<" ";
    }
    cout<<endl;
    pop_heap(arr.begin(),arr.end());
    for(int a: arr){
        cout<< a<<" ";
    }
    cout<<endl;
    arr.pop_back();
    for(int a: arr){
        cout<< a<<" ";
    }
    cout<<endl;
    sort_heap(arr.begin(),arr.end());
    for(int a: arr){
        cout<< a<<" ";
    }
    cout<<endl;
    return 0;
}