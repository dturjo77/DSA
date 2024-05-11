#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};
void insertAtHead(Node* &head, int d){

    Node* new_node = new Node(d);
    new_node->next = head;
    head = new_node;
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
    insertAtHead(head,10);
    //display(head);
    insertAtHead(head,20);
    //display(head);
    insertAtHead(head,30);
    //display(head);
    insertAtHead(head,40);
    //display(head);
    insertAtHead(head,50);
    display(head);

}