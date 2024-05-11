#include<iostream>
using namespace std;
int main(){
    int a[7]={3,3,3,5,5,1,3},count;
    int b[7];

    for(int i=0;i<7;i++){
        count=1;
        if(a[i]!=-1){
        for(int j=i+1;j<7;j++){
        if(a[i]==a[j]){
            count++;
            a[j]=-1;
            }
        }
        b[i]=count;
    }
    }
    
    for(int i=0;i<7;i++){
        if(b[i] == 1 ){
            cout<<"Unique valu"<<a[i]<<endl;
        }
    }
    for(int i=0;i<7;i++){
        if(b[i] > 1  && a[i]!=-1 ){
            cout<<"Duplicat valu"<<a[i]<<endl;
        }
    }
    for(int i=0;i<7;i++){
        if(a[i] != -1 ){
            cout<<a[i] <<"Frequency valu"<<b[i]<<endl;
        }
    }
}