#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;
int main(){
    /*
    vector<int> first(5);
    iota(first.begin(),first.end(),250);
    for(int a: first){
        cout<< a<<" ";
    }
        */
       vector<int> first;
       first.push_back(1);
       first.push_back(2);
       first.push_back(3);
       first.push_back(4);
       first.push_back(5);
       vector<int> result(first.size());
       partial_sum(first.begin(),first.end(),result.begin());
       for(int a: result){
        cout<< a<<" ";
       }
       vector<int> second;
       second.push_back(3);
       second.push_back(4);
       second.push_back(5);
       int ans =inner_product(first.begin(),first.end(),second.begin(),0);
       cout<< ans<< endl;
    return 0;
}