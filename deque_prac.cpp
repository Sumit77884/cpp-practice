#include<iostream>
using namespace std;
#include<queue>
int main(){
    deque<int>dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(40);
    dq.push_back(100);
    dq.push_front(200);
    dq.push_front(300);
    dq.push_front(400);
    cout<<dq.size()<<endl;

deque<int>::iterator it=dq.begin();
while(it !=dq.end()){
    cout<<*it<<" ";
    it++;
}
cout<<dq[0]<<endl;
cout<<dq.at(3)<<endl;
dq.insert(dq.begin(),101);
cout<<dq.front()<<endl;
cout<<dq.back()<<endl;
dq.erase(dq.begin(),dq.end());//dq.clear();
if(dq.empty()==true){
    cout<<"Deque is empty"<<endl;
}
else{
    cout<<"Deque is not empty"<<endl;
}
return 0;
}