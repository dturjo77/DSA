#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter array size"<<endl;
    cin>>n;

    int input_arr[n];
    cout<<"enter array value"<<endl;
    for (int i=0;i<n;i++){
        cin>>input_arr[i];
    }cout<<endl;

    // Find max value in input array
    int max=input_arr[0];
    for(int i=1; i<n; i++){
        if(input_arr[i]>max){
            max=input_arr[i];
        }
    }
    //cout<<max;

    //Create a count array
    int count_arr[max+1 ]={0};

    //Find frequency in input array
    for(int i=0; i<n; i++){
        count_arr[input_arr[i]]++;
    }

    for(int i=1; i<=max+1; i++){
        count_arr[i]+=count_arr[i-1];
    }

    int output_arr[n]={0};

    for(int i=n-1; i>=0; i--){
        output_arr[count_arr[input_arr[i]]-1]=input_arr[i];
        count_arr[input_arr[i]]--;
        //output_arr[count_arr[input_arr[i]]]=input_arr[i];
        //count_arr[input_arr[i]]=count_arr[input_arr[i]]-1;
    }

    for (int i=0;i<n;i++){
        cout<<output_arr[i]<<" ";
    }cout<<endl;
}