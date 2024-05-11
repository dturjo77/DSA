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

    for(int i=0; i<n-1; i++){
        int min=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            swap(arr[i],arr[min]);
        }
    }

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}