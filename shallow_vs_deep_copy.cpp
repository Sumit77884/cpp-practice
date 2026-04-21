#include<iostream>
using namespace std;
class abc{
    public:
    int x;
    int *y;
    abc(int _x,int _y):x(_x), y(new int(_y)){}
    // default dumb copy constructor:It does shallow copy
    abc(const abc &obj){
        x=obj.x;
        y=obj.y;
    }
    void print() const
    {
        printf("X:%d\n PTR Y:%p\nContent of Y (*y):%d\n\n",x,y,*y);
    }
};
int main(){
    abc a(1,2);
    cout<<"Printint a\n";
    a.print();
    abc b(a);
   // abc b=a;
   cout<<"Printint b\n";
    b.print();
    *b.y=20;
    cout<<"Printint b\n";
    b.print();
    cout<<"Printint a\n";
    a.print();
    return 0;
}