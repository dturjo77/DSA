#include<iostream>
using namespace std;
int main(){
    cout<<"enter array size"<<endl;
    int size;  cin>>size;
    cout<<endl<<"enter array value"<<endl;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    //swap the array value
    for(int i=0; i<size; i=i+2){
        if(i+1<=size){
            swap(arr[i],arr[i+1]);
        }
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

}