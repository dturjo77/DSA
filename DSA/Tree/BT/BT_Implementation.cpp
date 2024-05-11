#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    Node* laft;
    int data;
    Node* right;
    Node(int data){
        this->laft = NULL;
        this->data = data;
        this->right = NULL;
    }
};

Node* CreatBT(){
    int data; cin>>data;
    if(data == -1){ return NULL; }

    Node* new_node = new Node(data);
    cout<<"enter left data"<<endl;
    new_node->laft = CreatBT();
    cout<<"enter right data"<<endl;
    new_node->right = CreatBT();
    return new_node;
}

void Inorder(Node* &node){    //  L  Ro  R
    if(node == NULL){ return; }
    Inorder(node->laft);
    cout<<node->data<<" ";
    Inorder(node->right);
}

void Preorder(Node* &node){   //  Ro  L  R
    if(node == NULL){ return; }
    cout<<node->data<<" ";
    Preorder(node->laft);
    Preorder(node->right);
}

void Postorder(Node* &node){  //  L   R  Ro
    if(node == NULL){ return; }
    Postorder(node->laft);
    Postorder(node->right);
    cout<<node->data<<" ";
}

void Lavelorder(Node* &node){
    queue<Node*>q;
    q.push(node);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->laft){
                q.push(temp->laft);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void BSTinsert(){
    int data; cin>>data;
    if(data == -1){ return; }

    Node* new_node = new Node(data);
    while(new_node!=NULL){
        if(data>)
    }
}

int main(){
    Node* root ;
    root = CreatBT();
    Inorder(root); cout<<endl;
    Preorder(root); cout<<endl;
    Postorder(root); cout<<endl;
    Lavelorder(root); cout<<endl;
}