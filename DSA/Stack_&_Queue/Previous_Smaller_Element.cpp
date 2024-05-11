#include<iostream>
#include<stack>
using namespace std;

int main(){
    int arr[]={4,3,8,1,2,9};
    stack<int>s;

    for(int i=0; i<6; i++){
        while(!s.empty() && s.top()>=arr[i]){
            s.pop();
        }
        if(!s.empty()){
            cout<<-1<<" ";
        }else{
            cout<<s.top()<<" ";
        }
        s.push(arr[i]);
    }
}