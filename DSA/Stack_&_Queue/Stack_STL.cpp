#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>s;
    do{
        cout<<"Select operation"<<endl;
        cout<<"1 to push"<<endl;
        cout<<"2 to pop"<<endl;
        cout<<"3 to pick"<<endl;
        cout<<"4 to empty"<<endl;
        cout<<"5 to exit"<<endl;
        int sel; cin>>sel;

        if(sel == 1){
            cout<<"enter data";
            int data; cin>>data;
            s.push(data);
        }else if(sel == 2){
            s.pop();
        }else if(sel == 3){
            cout<<s.top()<<endl;
        }else if(sel == 4){
            cout<<s.empty()<<endl;
        }else{ return 0; }

    }while(1);
}