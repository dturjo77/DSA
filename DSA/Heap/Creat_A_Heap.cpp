#include<iostream>
using namespace std;

class heap{
    public:
    int *arr;
    int size;
    int count;
    heap(int size){
        this->size = size;
        arr[size];
        count = 0;
    }
};

int parentIndx(heap* &h,int indx){  //  <---------O(1)
    if(indx>=0 && h->count<=indx){
        return (indx-1)/2;
    }
    return -1;
}

int leftChild(heap* &h,int indx){  //  <---------O(1)
    int laft = (2*indx)+1;
    if(laft<=h->count){
        return laft;
    }
    return -1;
}

int rightChild(heap* &h,int indx){  //  <---------O(1)
    int right = (2*indx)+2;
    if(right<=h->count){
        return right;
    }
    return -1;
}

void heapIfy(heap* &h,int indx){  //  <---------O(log n)
    int max,l,r;
    l = leftChild(h,indx);
    r = rightChild(h,indx);

    if(l!=-1 && h->arr[l]>h->arr[indx]){
        max = l;
    }
    else if(r!=-1 && h->arr[r]>h->arr[indx]){
        max = r;
    }
    else{
        max = indx;
    }

    if(max != indx){
        swap(h->arr[max],h->arr[indx]);
        heapIfy(h,max);
    }
    else{
        return;
    }
}

void deleteElement(heap* &h,int indx){  //  <---------O(log n)
    if(h->count<0){ return; }
    h->arr[indx] = h->arr[h->count];
    h->count--;
    heapIfy(h,indx);
}

void insert(heap* &h,int val){  //  <---------O(log n)
    int indx;
    if(h->count+1 < h->size){
        indx = h->count++;
    }
    else{
        return;
    }

    while(indx > 0){
        int parent = (indx-1)/2;
        if(h->arr[parent] < h->arr[indx]){
            swap(h->arr[parent] , h->arr[indx]);
            indx = parent;
        }
        else{
            return;
        }
    }
}

int main(){
    heap* h = new heap(7);
}