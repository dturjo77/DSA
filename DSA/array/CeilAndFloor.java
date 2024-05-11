class CeilAndFloor{
    public static void ceilFloor(int[] arr, int val, int start, int end){
        if(start< arr.length || end >= 0) {
            System.out.println("Floor is "+ + -1 + " Ceil is "+ + -1);
            return;
        }
        if(start > end){
            System.out.println("Floor is "+ +arr[end]+ " Ceil is "+ +arr[start]);
            return;
        }
        int mid = (start + end)/2;
        if(arr[mid] == val){
            System.out.println(arr[mid]);
            return;
        }
        if(arr[mid] > val){
            ceilFloor(arr, val, start, mid-1);
        }else{
            ceilFloor(arr, val, mid+1, end);
        }
        return;
    }
    public static void main(String[] args){
        int[] arr = {1,3,5,6,89,90};
        ceilFloor(arr,100,0,arr.length-1);
    }
}