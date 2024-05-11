#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        data = d;
        next = NULL;
    }
};

void display(Node* &head){
    Node* temp = head;
    if(head != NULL){
        do{
            cout<<temp->data<<" ";
            temp =temp->next;
        }while(temp != head);
    }
}

void InsertAtHead(Node* &head,int data){
    Node* new_node = new Node(data);
    if(head == NULL){
        head = new_node;
        new_node->next = head;
        return;
    }
    Node* tail = head;
    while(tail -> next != head){
        tail = tail->next;
    }
    tail->next = new_node;
    new_node->next = head;
    head = new_node;
}

void InsertAtEnd(Node* &head,int data){
    Node* new_node = new Node(data);
    if(head == NULL){
        head = new_node;
        new_node->next = head;
        return;
    }
    Node* tail = head;
    while(tail->next != head){
        tail = tail->next;
    }
    tail->next = new_node;
    new_node->next = head;
}

void DeleteAtHead(Node* &head){
    if(head != NULL){
        Node* temp = head;
        Node*tail = head;
        while(tail->next != head){
            tail = tail->next;
        }
        head = head->next;
        tail->next =head;
        free(temp);
    }
}

void DeleteAtEnd(Node* &head){
    if(head != NULL){
        Node* tail = head;
        while(tail->next->next != head){
            tail = tail->next;
        }
        Node* temp = tail->next;
        tail->next =head;
        free(temp);
    }
}

int main(){
    Node* head = NULL;
    int data,pos,sel;

    do{
        cout<<"select operation"<<endl;
        cout<<"1 to Insert"<<endl;
        cout<<"2 to Delete"<<endl;
        cout<<"3 to Display Operation"<<endl;
        cout<<"4 Exit operation"<<endl;
        cin>>sel;

        if(sel == 1){
            cout<<"select operation"<<endl;
            cout<<"1 to Insert At head"<<endl;
            cout<<"2 to Insert At End"<<endl;
            cin>>sel;
            if(sel == 1){
                cout<<"enter valu"; cin>>data;
                InsertAtHead(head,data);
            }else if(sel == 2){
                cout<<"enter valu"; cin>>data;
                InsertAtEnd(head,data);
            }
        }else if(sel == 2){
            cout<<"select operation"<<endl;
            cout<<"1 to Delete At head"<<endl;
            cout<<"2 to Delete At End"<<endl;
            cin>>sel;
            if(sel == 1){
                DeleteAtHead(head);
            }else if(sel == 2){
                DeleteAtEnd(head);
            }
        }else if(sel == 3){
            display(head);
        }else if(sel == 4){
            return 0;
        }
    }while(1);

}