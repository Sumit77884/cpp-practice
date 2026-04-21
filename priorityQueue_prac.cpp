#include<iostream>
#include<queue>
using namespace std;
int main(){
    /*
priority_queue<int,vector<int>,greater<int>> pq;
pq.push(100);
pq.push(50);
pq.push(75);
int n=pq.size();
for(int i=0;i<n;i++){
cout<<pq.top()<<" ";
pq.pop();
}
*/
priority_queue<int> pq;
pq.push(10);
pq.push(25);
pq.push(55);
pq.push(21);
int n=pq.size();
for(int i=0;i<n;i++){
cout<<pq.top()<<endl;
pq.pop();
}

cout<<pq.top()<<endl;
cout<<pq.size()<<endl;
if(pq.empty()==true){
    cout<<"PQ is empty"<<endl;
}
else{
    cout<<"PQ is not empty"<<endl;
}
    return 0;
}