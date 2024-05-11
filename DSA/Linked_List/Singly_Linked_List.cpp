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

void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next; 
    }
}

void InsertAtHead(Node* &head,int data){
    Node* new_node = new Node(data);
    new_node->next = head;
    head = new_node;
}

void InsertAtMid(Node* &head,int data,int pos){
    if(pos == 0){
        InsertAtHead(head,data);
        return;
    }
    Node* new_node = new Node(data);
    Node* temp = head; int current_pos = 0;
    while(current_pos != pos-1){
        temp = temp->next;
        current_pos++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

void InsertAtEnd(Node* &head,int data){
    Node* temp = head;
    Node* new_node = new Node(data);
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next= new_node;
}

void DeleteAtHead(Node* &head){
    Node* temp = head;
    head = head->next;
    free(temp);
}

void DeleteAtMid(Node* &head,int pos){
    if(pos == 0){
        DeleteAtHead(head);
        return;
    }
    Node* previous = head; int current_pos = 0;
    while(current_pos != pos-1){
        previous = previous->next;
        current_pos++;
    }
    Node* temp = previous->next;
    previous->next = previous->next->next;
    free(temp);
}

void DeleteAtEnd(Node* &head){
    Node* second_last = head;
    while(second_last->next->next != NULL){
        second_last = second_last->next;
    }
    Node* temp = second_last->next;
    second_last->next = NULL;
    free(temp);
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
            cout<<"2 to Insert At Mid"<<endl;
            cout<<"3 to Insert At End"<<endl;
            cin>>sel;
            if(sel == 1){
                cout<<"enter valu"; cin>>data;
                InsertAtHead(head,data);
            }else if(sel == 2){
                cout<<"enter valu & position"; cin>>data; cin>>pos;
                InsertAtMid(head,data,pos);
            }else if(sel == 3){
                cout<<"enter valu"; cin>>data;
                InsertAtEnd(head,data);
            }
        }else if(sel == 2){
            cout<<"select operation"<<endl;
            cout<<"1 to Delete At head"<<endl;
            cout<<"2 to Delete At Mid"<<endl;
            cout<<"3 to Delete At End"<<endl;
            cin>>sel;
            if(sel == 1){
                DeleteAtHead(head);
            }else if(sel == 2){
                cout<<"enter position"; cin>>pos;
                DeleteAtMid(head,pos);
            }else if(sel == 3){
                DeleteAtEnd(head);
            }
        }else if(sel == 3){
            display(head);
        }else if(sel == 4){
            return 0;
        }
    }while(1);

}