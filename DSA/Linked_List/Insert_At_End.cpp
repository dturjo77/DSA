#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};

void insertAtEnd(Node* &end,int valu){

    Node* new_node = new Node(valu);
    end->next = new_node;
    end = new_node;
}

void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    Node* node1 = new Node(10);
    Node* end = node1;
    Node* head = node1;

    insertAtEnd(end,20);
    insertAtEnd(end,30);
    insertAtEnd(end,40);
    insertAtEnd(end,50);
    display(head);
}