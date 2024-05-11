#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter array size"<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter array value"<<endl;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }cout<<endl;

    for(int i=1; i<n; i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[i]=temp;
    }

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}