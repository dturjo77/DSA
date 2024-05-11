#include<iostream>
using namespace std;
int main(){

    int key;
    cout<<"enter array size"<<endl;
    cin>>key;

    int arr[key];
    cout<<"enter sorted array value"<<endl;
    for (int i=0;i<key;i++){
        cin>>arr[i];
    }cout<<endl;

    int value;
    cout<<"enter searching value"<<endl;
    cin>>value;

    int start=0,end=key-1,mid=start + (end-start)/2;
    while(start <= end){
        if(value == arr[mid]) {
            cout<<"find value";
            break;
        } else if(value > arr[mid]){
            start=mid+1;
        } else if(value < arr[mid]){
            end=mid-1;
        }
        mid=start + (end-start)/2;
    }


    return 0;
}
/*
Time Complexity: 
Best Case: O(1)
Average Case: O(log N)
Worst Case: O(log N)
Auxiliary Space: O(1), If the recursive call stack is considered then the auxiliary
space will be O(logN).

Advantages of Binary Search:
Binary search is faster than linear search, especially for large arrays.
More efficient than other searching algorithms with a similar time complexity, 
such as interpolation search or exponential search.
Binary search is well-suited for searching large datasets that are stored in 
external memory, such as on a hard drive or in the cloud.

Drawbacks of Binary Search:
The array should be sorted.
Binary search requires that the data structure being searched be stored
in contiguous memory locations. 
Binary search requires that the elements of the array be comparable,
meaning that they must be able to be ordered.

Applications of Binary Search:
Binary search can be used as a building block for more complex algorithms used
in machine learning, such as algorithms for training neural networks or finding
the optimal hyperparameters for a model.
It can be used for searching in computer graphics such as algorithms for ray
tracing or texture mapping.
It can be used for searching a database.
*/