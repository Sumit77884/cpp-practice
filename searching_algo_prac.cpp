#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector <int> arr;
arr.push_back(10);
arr.push_back(20);
arr.push_back(30);
arr.push_back(40);
arr.push_back(40);
arr.push_back(50);
arr.push_back(60);
auto it=max_element(arr.begin(),arr.end());
cout<<*it<<endl;
it=min_element(arr.begin(),arr.end());
cout<<*it<<endl;
int a=10;
int b=15;
cout<<max(a,b)<<endl;
cout<<min(a,b)<<endl;
it =upper_bound(arr.begin(),arr.end(),40);
cout<< *it<<endl;
it = lower_bound(arr.begin(),arr.end(),50);
cout<<*it<<endl;
int target=40;
bool it2=binary_search(arr.begin(),arr.end(),target);
cout<<it2<<endl;
return 0;
}