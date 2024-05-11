import java.util.Scanner;

class ArrayIsSortedOrNot{

    public static boolean sort(int arr[], int i){
        if(i > arr.length-1){
            return true;
        }
        if(arr[i] > arr[i-1]){
            return sort(arr, i+1);
        }else{
            return false;
        }
        
    }
    public static void main(String[] args){
        int[] arr = {1,2,6,4,5};
        System.out.println(sort(arr, 1));
    }
}