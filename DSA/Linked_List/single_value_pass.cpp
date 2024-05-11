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

int main(){
    Node* node1 = new Node(20);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    return 0;
}