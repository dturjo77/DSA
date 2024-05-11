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

    int count=1;
    while(count<n){
        for(int i=0;i<n-count;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
        count++;
    }

    for (int i=0;i<n;i++){
        cout<<arr[i];
    }cout<<endl;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}