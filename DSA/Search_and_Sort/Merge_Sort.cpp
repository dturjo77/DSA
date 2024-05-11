#include<iostream>
using namespace std;

void conquer(int arr[], int si, int mid, int ei){
    int marge[ei-si+1];
    int idx1=si;
    int idx2=mid+1;
    int x=0;
    while(idx1<=mid && idx2<=ei){
        if(arr[idx1] <= arr[idx2]){
            marge[x] = arr[idx1];
            x++; idx1++;
        }else{
            marge[x] = arr[idx2];
            x++; idx2++;
        }
    }

    while(idx1 <= mid){
        marge[x++] = arr[idx1++];
    }

    while(idx2 <= mid){
        marge[x++] = arr[idx2++];
    }

    for(int i=0,j=si; i<ei; i++,j++){
        arr[j] = marge[i];
    }
}
void divide(int arr[], int si, int ei){
    if(si>=ei){
        return;
    }
    int mid = si + (ei-si)/2;
    divide(arr, si, mid);
    divide(arr, mid+1, ei);
    conquer(arr, si, mid, ei);
}

int main(){
    cout<<"enter array size"<<" ";
    int size; cin>>size;
    int arr[size];
    cout<<"enter array value"<<endl;
    
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    divide(arr, 0, size-1);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}