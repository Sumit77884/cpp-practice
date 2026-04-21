#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    /*
    map<int,string>table;
    table.insert(make_pair(3,"Sumit"));
    table.insert(make_pair(1,"Lakshita"));
    table.insert(make_pair(2,"Ajit"));
    map<int,string>::iterator it =table.begin();
    while(it !=table.end()){
        pair<int,string>p=*it;
        cout<<p.first<<" "<<p.second<<endl;
        it++;
    }
        */
       map<string,string>table;
       table["in"]="India";
       table.insert(make_pair("en","England"));
       pair<string,string>p;
       p.first="br";
       p.second="brazil";
       table.insert(p);
       cout<<table.size()<<endl;
       map<string,string>::iterator it=table.begin();
       while(it!=table.end()){
        pair<string,string> p;
        p=*it;
        cout<<p.first<<" "<<p.second<<endl;
        it++;
       }
       if(table.count("in")!=0){
        cout<<"Here->count Key not found"<<endl;
       }
       table["im"]="Sumit";
       if(table.count("im")>0){
        cout<<"Key found->"<<endl;
       }
       if(table.find("im") !=table.end()){
        cout<<"Key Found"<<endl;
       }
       else{
       cout<<"Key not found"<<endl;
       }
       //table.erase(table.begin(),table.end());
       cout<<table.size()<<endl;
       cout<<table.at("in")<<endl;
       table.at("in")="India2";
       table["in"]="India3";
       cout<<"Here->"<<table.at("in")<<endl;
       cout<<table.size()<<endl;
       table.clear();
       cout<<table.size()<<endl;
       if(table.empty()==true){
        cout<<"Map is empty"<<endl;
       }
       else{
        cout<<"Map is not empty"<<endl;
       }
    return 0;
}