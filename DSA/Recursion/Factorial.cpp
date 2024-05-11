#include<iostream>
using namespace std;

int factorial(int n){

    if(n == 0){ return 1;}

    return n*factorial(n-1);
}

int main(){
    cout<<"enter number"<<endl;
    int n,fact; cin>>n;
    if(n<=0){
        cout<<"error";
    }else{
        fact = factorial(n);
    }
    cout<<"factorial is "<<fact;

}