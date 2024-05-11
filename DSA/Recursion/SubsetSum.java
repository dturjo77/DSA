class SubsetSum{
    public static void main(String[] args){
        int[] arr = {20,10,15,5,5};
        System.out.println(setNumber(arr, 25, 0));
    }

    public static int setNumber(int[] arr, int sum, int i){
        if(sum == 0) return 1;
        if(sum < 0) return 0;
        if(i == arr.length) return 0;

        return setNumber(arr, sum-arr[i], i+1) + setNumber(arr, sum, i+1);
    }
}