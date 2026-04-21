#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> arr(5,vector<int>(4,0));
    int totalRows=arr.size();
    int totalColumns=arr[0].size();
    cout<<totalRows<<endl;
    cout<<totalColumns<<endl;
    vector<vector<int>>brr(4);
    brr[0]=vector<int>(4);
    brr[1]=vector<int>(2);
    brr[2]=vector<int>(5);
    brr[3]=vector<int>(3);
    vector<int>first;
    first.push_back(10);
    first.push_back(11);
    first.push_back(12);
    first.push_back(13);
    vector<int>::iterator it =first.begin();
    while(it !=first.end()){
        cout<< *it<<" ";
        it++;
    }
    vector <int> second;
    second.push_back(100);
    second.push_back(200);
    second.push_back(300);
    second.push_back(400);
    first.swap(second);
    for(int i:first){
        cout<<i<<" ";
    }
    for(int i:second){
        cout<<i<<" ";
    }
    cout<<second.max_size()<<endl;
    //cout<<second.reverse()<<endl;
 second.reserve(110);
    for(int i:second){
        cout<<i<<" ";
    }
    cout<<endl;
    second.insert(second.begin(),50);

    for(int i:second){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<second.size()<<endl;
    cout<<second.capacity()<<endl;
    second[0]=100;
    cout<<second.at(0)<<endl;
    cout<<second.at(1)<<endl;
    second.pop_back();
    for(int i:second){
        cout<<i<<" ";
    }
    cout<<endl;
    second.erase(second.begin(),second.end());
    if(second.empty()){
        cout<<"vector is Empty"<<endl;
    }
    else{
        cout<<"Vector is not Empty"<<endl;
    }

    return 0;
}