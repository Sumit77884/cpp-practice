#include<iostream>
using namespace std;
#include<queue>
int main(){
queue<int> first;
queue<int> second;
first.push(10);
first.push(20);
second.push(100);
second.push(200);
second.push(300);
second.push(400);
cout<<first.front()<<endl;
cout<<second.back()<<endl;
first.swap(second);
int n=first.size();
for(int i=0;i<=n-1;i++){
   cout<< first.front()<<" ";
   first.pop();
}
if(first.empty()==true){
    cout<<endl<<"Queue is Empty:";
}
else{
    cout<<"Queue is not Empty.";
}
    return 0;
}