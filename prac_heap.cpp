#include<iostream>
using namespace std;
class Heap{
    public:
    int* arr;//dynamic array
    int capacity;
    int index;
Heap(int n){
    this->capacity =n;
    arr =new int[n];//dynamic array memory allocation
    index =0;
    //jab bhi mujhe insert krna hoga,tab index+1 krke insert krdena
}
void printHeap(){
    for(int i=1;i<capacity;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insert(int val){
    if(index == capacity -1){
        cout<<"Overflow"<<endl;
        return;
    }

    //agar jagah available h
    index++;
    arr[index]=val;
    cout<<"placing"<<val<<"index:"<<index<<endl;
    //now put val at right position
    //by  comparing with parent node
    int i =index;
    while(i>1){
        int parentIndex =i/2;
        if(arr[parentIndex]<arr[i]){
            swap(arr[parentIndex],arr[i]);
            i =parentIndex;
        }
        else{
            //parent already bada h,no need to do anything
            break;
        }
    }
}
void deleteFromHeap(){
    //replacement
    swap(arr[1],arr[index]);
    //size decrease
    index--;
    //heapify
    //heapify(arr,index,1);
}
};
//heapify value present at currIndex
void heapify(int* arr,int n,int currIndex){
    //n-> number of elements in heap
    int i=currIndex;
    int leftIndex=2*i;
    int rightIndex=2*i +1;
    int largestKaIndex =i;
    //assuming i pr value hi sabse badi value h
    //pr ho skta h, sabse badi value left ya right me hu
    //check for left
    if(leftIndex <n && arr[leftIndex] > arr[largestKaIndex]){
        //left mee badi value mil gyi
        largestKaIndex =leftIndex;
    }
    //check for Right
    if(rightIndex <n && arr[rightIndex]>arr[largestKaIndex]){
        //right mee  badi value mil gyi
        largestKaIndex =rightIndex;
    }
    //jab yaha aaoge tb tumhare pass sabse bde value kaa index hoga
    //largestValue still i wali h,then no need to do anything
    //agar largestKaIndex left yaa right mee se koi,then swap logic
    if(largestKaIndex !=i){
        //left yaa right me se koi h
        cout<<"replacing"<<arr[i]<<" with "<<arr[largestKaIndex]<<endl;
        swap(arr[i],arr[largestKaIndex]);
        i=largestKaIndex;//baaki recursion sambhal lega
        heapify(arr,n,i);
    }
}
void buildHeap(int* arr,int n){
    for(int i=n/2;i>=1;i--){
        heapify(arr,n,i);
    }
}
//assuming arr is a valid heap
void heapSort(int* arr,int n){
    //n->size
    while(n>1){
        //delete root element,swap root element with the last element
        swap(arr[1],arr[n-1]);
        //delete last element
        n--;
        //heapify 1 index wala element
        heapify(arr,n,1);
    }
}
int main(){
    int arr[]={-1,10,20,30,40,50};
    int n=6;
    buildHeap(arr,n);
    cout<<endl<<"Printing heap "<<endl;
    for(int i=1;i<n;i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    heapSort(arr,n);
    cout<<endl<<"Printing heap"<<endl;
    for(int i=1;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Heap pq(6);
    pq.insert(10);
    pq.insert(20);
    pq.insert(30);
    pq.insert(40);
    pq.insert(50);
    cout<<"Printing heap:"<<endl;
    pq.printHeap();
    cout<<endl;
    cout<<"Showing heapSort: "<<endl;
    pq.deleteFromHeap();
    pq.printHeap();
    cout<<endl;
    pq.deleteFromHeap();
    pq.printHeap();
    cout<<endl;
    pq.deleteFromHeap();
    pq.printHeap();
    cout<<endl;
    pq.deleteFromHeap();
    pq.printHeap();
    cout<<endl;
    pq.deleteFromHeap();
    pq.printHeap();
    return 0;
}