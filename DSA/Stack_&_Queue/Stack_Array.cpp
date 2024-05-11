#include<iostream>
using namespace std;

class MyStack{
    public:
    int *arr;
    int top;
    int capacity;
    MyStack(int size){
        arr = new int[size];
        top = -1;
        capacity = size;
    }

    bool isFull(){
        if(top == capacity-1){ return false; }
        else { return true; }
    }

    bool isEmpty(){
        return top = -1;
    }

    void push(int data){
        if(isFull()){
            cout<<"over flow"<<endl; return;
        }
        arr[++top] = data;
    }

    int pick(){
        if(isEmpty()){
            cout<<"under flow"<<endl;
        }
        return arr[top];
    }

    void pop(){
        if(top == -1){
            cout<<"underflow"<<endl; return;
        }
        top--;
    }

    void display(){
        if(isEmpty()){
            cout<<"empty"<<endl; return;
        }
        int curnt = top;
        cout<<arr[curnt--]<<" "<<endl;
    }

};

int main(){
    cout<<"enter stack size"<<endl;
    int size; cin>>size;
    MyStack st(size);

    do{
        cout<<"Select operation"<<endl;
        cout<<"1 to push"<<endl;
        cout<<"2 to pop"<<endl;
        cout<<"3 to pick"<<endl;
        cout<<"4 to empty"<<endl;
        cout<<"5 to display"<<endl;
        int sel; cin>>sel;

        if(sel == 1){
            cout<<"enter data";
            int data; cin>>data;
            st.push(data);
        }else if(sel == 2){
            st.pop();
        }else if(sel == 3){
            cout<<st.pick()<<endl;
        }else if(sel == 4){
            cout<<st.isEmpty()<<endl;
        }else if(sel == 5){
            st.display();
        }else{ return 0; }

    }while(1);

}