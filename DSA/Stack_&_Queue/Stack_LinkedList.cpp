#include<iostream>
using namespace std;

class MyStack{
    public:
    int data;
    MyStack* next;
    MyStack(int d){
        data = d;
        next = NULL;
    }
};

void push(MyStack* &head,int data){
    MyStack* new_stack = new MyStack(data);
    new_stack->next = head;
    head = new_stack;
}

void pop(MyStack* &head){
    if(head == NULL){
        cout<<"underflow"<<endl; return;
    }
    head = head->next;
}

int pick(MyStack* &head){
    if(head == NULL){
        cout<<"underflow"<<endl; return 0;
    }
    return head->data;
}

bool empty(MyStack* &head){
    return head->next == NULL;
}

void display(MyStack* &head){
    if(head == NULL){
        cout<<"empty"<<endl; return;
    }
    while(head->next != NULL){
        cout<<head->data<<" "<<endl;
    }
}

int main(){
    MyStack* head;

    do{
        cout<<"Select operation"<<endl;
        cout<<"1 to push"<<endl;
        cout<<"2 to pop"<<endl;
        cout<<"3 to pick"<<endl;
        cout<<"4 to empty"<<endl;
        cout<<"5 to display"<<endl;
        cout<<"6 to display"<<endl;
        int sel; cin>>sel;

        if(sel == 1){
            cout<<"enter data";
            int data; cin>>data;
            push(head,data);
        }else if(sel == 2){
            pop(head);
        }else if(sel == 3){
            cout<<pick(head)<<endl;
        }else if(sel == 4){
            cout<<empty(head)<<endl;
        }else if(sel == 5){
            display(head);
        }else{ return 0; }

    }while(1);

}