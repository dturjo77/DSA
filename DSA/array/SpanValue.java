class SpanValue{
    public static void main(String[] args){
        int [] arr = {23, 12, 6, 45, 99, 88};
        System.out.println(span(arr));
    }

    public static int span(int[] arr){
        int min = arr[0];
        int max = arr[0];

        for(int i=0; i<arr.length; i++){
            if(min > arr[i])
                min = arr[i];
            if(max < arr[i])
                max = arr[i];
        }

        return max-min;
    }
}