#include<iostream>
#include<vector>
#include<forward_list>
#include<list>
using namespace std;
int main(){
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);
    vector<int>::iterator it =arr.begin();
    while(it !=arr.end()){
        *it =*it+7;
        cout<<*it<<" ";
        it++;
    }
    vector<int>::iterator it1=arr.begin()+3;
    cout<<endl<<*it1<<endl;
    list<int>myList;
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    list<int>::iterator it2 =myList.begin();
    while(it2 !=myList.end()){
        (*it2)=(*it2)+2;
     cout<<(*it2)<<" ";
       it2++;
    }
    cout<<endl;
    //Back tracking
    list<int>::iterator it3 =myList.end();
    while(it3 !=myList.begin()){
        it3--;
        cout<<*it3<<" ";
        
    }
    cout<<endl;
    // forward list
    forward_list<int> list;
    list.push_front(10);
    list.push_front(20);
    list.push_front(30);
    list.push_front(40);
    list.push_front(50);
    list.push_front(60);
    forward_list <int>::iterator it4=list.begin();
    while(it4 != list.end()){
        
        (*it4)=(*it4)+5;
        cout<<*it4<<" ";
        it4++;
    }
    cout<<endl;
    //it will not work because only forward travesing is allowed.
    /*
   while(it4 !=list.begin()){
        it4--;
        cout<<*it4<<" ";
    }
        */
       

}