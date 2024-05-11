#include<iostream>
using namespace std;

class CircularQueue{
    public:
    int front,rear;
    int size;
    int *arr;
    CircularQueue(int s){
        size = s;
        front = rear = -1;
        arr = new int [size];
    }

    void enQuque(int data){
        if((front == 0 && rear == size-1)||(rear == (front-1)%(size-1))){
            cout<<"Queue is full"<<endl; return;
        }else if(front == -1){
            front = rear = 0;
        }else if(rear == size-1 || front !=0){
            rear = 0;
        }else{
            rear++;
        }
        arr[rear]=data;
    }

    int deQueue(){
        if(front == -1){
            cout<<"empty"; return 0;
        }
        int ans = arr[front];
        if(front == rear){
            front = rear = -1;
        }else if(front == size-1){
            front = 0;
        }else{
            front++;
        }
        return ans;
    }
};

int main(){

}