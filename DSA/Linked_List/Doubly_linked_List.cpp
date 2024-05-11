#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int d){
        data = d;
        prev = next = NULL;
    }
};

void InsertAtHead(Node* &head, Node* &tail,int data){
    Node* new_node = new Node(data);
    if(head == NULL){
        head = new_node;
        tail = new_node;
    }else{
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
}

void InsertAtMid(Node* &head,Node* &tail,int data,int pos){
    Node* temp = head;
    for(int i=1; i<(pos-1); i++){
        temp = temp->next;
    }

    Node* new_node = new Node(data);
    new_node->next = temp->next;
    temp->next = new_node;
    new_node->prev = temp;
    new_node->next->prev = new_node;
}

void InsertAtEnd(Node* &head,Node* &tail,int data){
    Node* new_node = new Node(data);
    if(tail == NULL){
        head = new_node;
        tail = new_node;
    }
    tail->next = new_node;
    new_node->prev = tail;
    tail = new_node;
}

void DeleteAtHead(Node* &head,Node* &tail){
    if(head != NULL){
        Node* temp = head;
        head = head->next;
        if(head == NULL){
            tail == NULL;
        }else{
            head->prev = NULL;
        }
        free(temp);
    }
}

void DeleteAtMid(Node* &head,Node* &tail,int pos){
    Node* temp = head;
    for(int i=1; i<pos; i++){
        temp = temp->next;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    free(temp);
}

void DeleteAtEnd(Node* &head,Node* &tail){
    if(tail != NULL){
        Node* temp = tail;
        tail = tail->prev;
        if(tail == NULL){
            head == NULL;
        }else{
            tail->next = NULL;
        }
        free(temp);
    }
}

void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next; 
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
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
                InsertAtHead(head,tail,data);
            }else if(sel == 2){
                cout<<"enter valu & position"; cin>>data; cin>>pos;
                InsertAtMid(head,tail,data,pos);
            }else if(sel == 3){
                cout<<"enter valu"; cin>>data;
                InsertAtEnd(head,tail,data);
            }
        }else if(sel == 2){
            cout<<"select operation"<<endl;
            cout<<"1 to Delete At head"<<endl;
            cout<<"2 to Delete At Mid"<<endl;
            cout<<"3 to Delete At End"<<endl;
            cin>>sel;
            if(sel == 1){
                DeleteAtHead(head,tail);
            }else if(sel == 2){
                cout<<"enter position"; cin>>pos;
                DeleteAtMid(head,tail,pos);
            }else if(sel == 3){
                DeleteAtEnd(head,tail);
            }
        }else if(sel == 3){
            display(head);
        }else if(sel == 4){
            return 0;
        }
    }while(1);

}
