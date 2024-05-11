#include<iostream>
using namespace std;
int main()
{
    int key,i;
    cout<<"enter array size"<<endl;
    cin>>key;
    int arr[key];
    cout<<"enter array value"<<endl;
    for (i=0;i<key;i++){
        cin>>arr[i];
    }
    int value ,j=0;
    cout<<"enter searching value"<<endl;
    cin>>value;
    for(i=0;i<key;i++){
        if(value==arr[i]){
            j++;
        }
    }
    if(j>0){
        cout<<"value is find";
    }else{
        cout<<"value not find";
    }
    
    
}