#include<iostream>
using namespace std;
int main(){
    int ***r,**q,*p,i=8,j=7;
    p= &i;
    (*p)++;
    q=&p;
    (**q)++;
    r=&q;
    cout<<*p<<" "<<**q<<" "<<***r<<i<<j;
    return 0;
}