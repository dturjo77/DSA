#include<iostream>
using namespace std;

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i=high;
    
    for(int j=high; j>low; j--){
        if(arr[j]<pivot){
            swap(arr[j],arr[i]);
            i--;
        }
    }
    swap(arr[i],arr[low]);
    return i;  //pivort indx
}

void quickSort(int arr[],int low,int high){
    if(low<high){
        int pivotInx=partition(arr, low, high);
        quickSort(arr, low, pivotInx-1);
        quickSort(arr, pivotInx+1, high);
    }
}

int main(){
    cout<<"enter array size";
    int size; cin>>size;
    int arr[size];
    cout<<"enter array value"<<endl;
    
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    quickSort(arr,0,size-1);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

}