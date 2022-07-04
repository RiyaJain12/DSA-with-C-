// node: ith index
// left child: 2*i index
// right child:2*i +1
// parent: i/2 index
#include<iostream>
using namespace std;
class heap{
   public:
   int arr[100];
   int size;
   heap(){
    arr[0]=-1;
    size=0;
   }
   //time Complexity(O(logn))
   void insert(int val){
    size=size+1;
    int index=size;
    arr[index]=val;
    while(index>1){
        int parent=index/2;
        if(arr[parent]<arr[index]){
            swap(arr[parent],arr[index]);
            index=parent;
        }
        else{
            return;
        }
    }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
    //time complexity O(logn)
    void deletefromHeap(){
        if(size==0){
            cout<<"nothing to delete";
            return;
        }
        arr[1]=arr[size];
        size--;
        int i=1;
        while(i<size){
            int leftidx=2*i;
            int rightidx=2*i+1;
            if(leftidx<=size && arr[i]<arr[leftidx]){
                swap(arr[i],arr[leftidx]);
                i=leftidx;
            }
            else if(rightidx<=size && arr[i]<arr[rightidx]){
                swap(arr[i],arr[rightidx]);
                i=rightidx;
            }
            else {
            return;
            }
        }
    }
};
int main(){
    heap h;
    h.insert(53);
    h.insert(56);
    h.insert(54);
    h.insert(55);
    h.insert(52);
    h.print();
    h.deletefromHeap();
    h.print();
    return 0;
}
