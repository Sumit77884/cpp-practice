#include<iostream>
using namespace std;
int main(){
    string s1="love";//s1 ko compare kr rha h s2 see
    string s2="lowe";//agr s1  ka string ka aur s2 ke string ka same 
    cout<< s1.compare(s2)<<endl;//same index pee s2 kaa km hoga to +1 aaye ga
    string name ="Hello jee Kaise ho Saare";
    string word ="Kaise ho";
    if(name.find(word) != string::npos){
       cout<<"Found.";
    }
    else {
 cout<<"Not Found.";
    }
    int ans=name.find(word);
    cout<<endl<< ans <<endl;
    cout<< name.substr(5);
    string fName ="Love";
    string lName="babbar";
    string ans1 =fName+" "+lName;
    cout<<endl<< ans1<<endl;
    string name1="Maharana Pratap";
   name1.clear();
   if(name1.empty()){
      cout<<"String is Empty"<<endl;
   }
   else{
      cout<<"String is not Empty";
   }
   auto it =name.begin();
   while(it !=name.end()){
      cout<<*it<<" ";
      it++;
   }
   cout<<endl;
   cout<<name[0]<<endl;
   cout<<name.at(0)<<endl;
   cout<<name.front()<<endl;
   cout<<name.back()<<endl;
   cout<<name.length()<<endl;
   string sentence;
   cout<<"Enter sentance:"<<endl;
  // cin>>sentence;
   //cout<<sentence<<endl;

   getline(cin,sentence,'\n');// in char we use getline(cin,sentence,'\n');
    cout<<sentence<<endl;

    //creation 
    string str;
    str.push_back('l');
    str.push_back('o');
    str.push_back('v');
    str.push_back('e');
    str.pop_back();
    cout<<str<<endl;
    cout<<"Enter the input"<<endl;
    cin>>str;
    cout<<"Str: "<<str<<endl;
    cout<<str[0]<<endl;
    return 0;
}