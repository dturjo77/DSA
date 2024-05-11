class SecondMaxMin{
    public static void main(String[] args){
        int [] arr = {23, 12, 6, 45, 99, 88};
        second(arr);
    }

    public static void second(int[] arr){
        //max
        int max1,max2;
        if(arr[0] > arr[1]){
            max1 = arr[0];
            max2 = arr[1];
        }else{
            max1 = arr[1];
            max2 = arr[0];
        }
        for(int i=2; i<arr.length; i++){
            if(arr[i] > max1){
                max2 = max1;
                max1 = arr[i];
            }else if(arr[i] > max2){
                max2 = arr[i];
            }
        }
        System.out.println("second max valu"+ +max2);

        //min
        int min1,min2;
        if(arr[0] > arr[1]){
            min2 = arr[0];
            min1 = arr[1];
        }else{
            min2 = arr[1];
            min1 = arr[0];
        }
        for(int i=2; i<arr.length; i++){
            if(min1 > arr[i]){
                min2 = min1;
                min1 = arr[i];
            }else if(min2 > arr[i]){
                min2 = arr[i];
            }
        }
        System.out.println("second min value"+ +min2);

    }
}