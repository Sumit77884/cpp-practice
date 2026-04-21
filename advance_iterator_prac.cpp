#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void printDouble(int a){
    cout<< 2*a<<" "; 
}
bool checkEven(int a){
    return a%2 ==0;
}
int main(){
    vector <int> arr(7);
    arr[0]=10;
    arr[1]=11;
    arr[2]=12;
    arr[3]=13;
    arr[4]=14;
    arr[5]=15;
    arr[6]=12;
    /*
   vector<int>::iterator it =partition(arr.begin(),arr.end(),checkEven);
    for(int a: arr){
        cout<<a<<" ";
    }
    cout<<endl;
    auto it1=unique(arr.begin(),arr.end());
    for(int b:arr){
        cout<<b<<" ";
    }
    cout<<endl;
    arr.erase(it1,arr.end());
    for(int c:arr){
        cout<<c<<" ";
    }
    cout<<endl;
    
   cout<<"Before: "<<endl;
   for(int a: arr){
    cout<< a<< " ";
   }
   cout<<endl;
   rotate(arr.begin(),arr.begin()+3,arr.end());
   cout<<"After"<<endl;
   for(int a: arr){
    cout<< a <<" ";
   }
   cout<<endl;
   sort(arr.begin(),arr.end());
   cout<<"After sorting"<<endl;
   for(int a: arr){
    cout<< a<<" ";
   }
 cout<<endl;
 reverse(arr.begin(),arr.end());
 cout<<"After reversing"<<endl;
   for(int a: arr){
    cout<< a<<" ";
   }
   cout<<endl;
int ans = count_if(arr.begin(),arr.end(),checkEven);
cout<<"Counting of Even elements: "<<ans<<endl;
*/
cout<<"Use of find_if "<<endl;
 auto it = find_if(arr.begin(),arr.end(),checkEven);
  cout<<*it<<endl;
  cout<<"use of for_each:"<<endl;
  for_each(arr.begin(),arr.end(),printDouble);
  cout<<endl;
  for(int a: arr){
    cout<<a<<" ";
  }
  cout<<endl;
  int target =24;
  cout<<endl<<"use of find:"<<endl;
  auto it1 =find(arr.begin(),arr.end(),target);
  cout<<*it1<<endl;
    return 0;
}