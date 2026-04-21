#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> first;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    first.push_back(40);
    first.insert(first.begin(),100);
    cout<<first.size()<<endl;
    list <int>::iterator it1=first.begin();
    while(it1!=first.end()){
        cout<<*it1<<" ";
        it1++;
    }
    cout<<endl;
    first.erase(first.begin(),first.end());
    cout<<first.size()<<endl;
    list<int> second;
    second.push_back(56);
    second.push_back(57);
    second.push_back(58);
    second.push_back(59);
    first.swap(second);
    it1=first.begin();
    while(it1!=first.end()){
        cout<<*it1<<" ";
        it1++;
    }
    cout<<endl;
  first.remove(58);
  it1=first.begin();
    while(it1!=first.end()){
        cout<<*it1<<" ";
        it1++;
    }
    cout<<endl;
    cout<<first.front()<<" ";
    cout<<first.back()<<" ";
    first.clear();
    if(first.empty()==true){
        cout<<"List is empty.";
    }
    else{
        cout<<"List is not empty";
    }
    return 0;

}  