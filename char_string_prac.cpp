#include<iostream>
#include<cstring>
using namespace std;
/*
int getLength(char arr[],int size){
    int count=0;
    for(int index=0;index<size;index++){
        if(arr[index]=='\0'){
            break;
        }
        else {
            count++;
        }
    }
    return count;
}
bool checkPalindrome(char arr[],int n){
    int len=getLength(arr,n);
    cout<<len;
    int i=0;
    int j=len-1;
    while(i <=j){
    if(arr[i]==arr[j]){
        i++;
        j--;
    }
    else {
        return false;
    }
}
return true;
}
void replaceCharacter(char originalChar,char newChar,char arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]==originalChar)
        {
            arr[i]=newChar;
        }
    }
}
void reverseCharArray(char arr[],int n){
    int len=getLength(arr,n);
    int i=0;
    int j=len-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
    void convertIntoUpperCase(char arr[],int n){
        int len=getLength(arr,n);
        for(int i=0;i<len;i++){
            char ch=arr[i];
            if(ch>='a' && ch<='z'){
                ch=ch-'a'+'A';
            }
            arr[i]=ch;
        }
    }
    void convertLowerCase(char arr[], int n){
        int len=getLength(arr,n);
        for(int i=0;i<len;i++){
            char ch=arr[i];
            if(ch>='A' && ch<='Z'){
                ch =ch-'A'+'a';
            }
            arr[i]=ch;
        }
    }
        */

int main(){
    /*
    char arr1[100];
    cout<<"Enter the input:"<<endl;
    cin>>arr1;
    char arr2[100];
    cout<<"Enter the input:"<<endl;
    cin>>arr2;
    cout<<strlen(arr1)<<endl;
  char  ch2="d"-"a";
  cout<<ch2+"A"<<endl;
    cout<<strcat(arr1,arr2)<<endl;
    char arr[1000]="racecar";
   // cout<<"Enter char for cheacking Palindomr:"<<endl;
   // cin>>arr;
    cout<<"Palindom or not:"<<checkPalindrome(arr,1000)<<endl;
    cout<<getLength(arr,1000)<<endl;

char arr[100];
cout<<"Enter input "<<endl;
//cin>>arr;
cin.getline(arr,80,'.');
cout<<arr<<endl;
*/
char arr[100];
cout<<"Enter your name:"<<endl;
cin>>arr;
//cin.getline(arr,80);
cout<<"Your name is:"<<arr<<endl;
cout<<arr[0]<<"->"<<(int) arr[0] << endl;
cout<<arr[1]<<"->"<<(int) arr[1] << endl;
cout<<arr[2]<<"->"<<(int) arr[2] << endl;
cout<<arr[3]<<"->"<<(int) arr[3] << endl;
cout<<arr[4]<<"->"<<(int) arr[4] << endl;
cout<<arr[5]<<"->"<<(int) arr[5] << endl;
return 0;
}