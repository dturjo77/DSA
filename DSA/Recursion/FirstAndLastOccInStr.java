import java.util.Scanner;
class FirstAndLastOccInStr{
    public static int first = -1;
    public static int last = -1;

    public static void reverse(String r, int idx, char ele){
        if(idx == r.length()){
            if(first == -1){
            System.out.print("not found");
            }
            System.out.print(first+ " " +last);
            return;
        }
        
        char current = r.charAt(idx);
        if(current == ele){
            if(first == -1){
                first = idx;
                last = idx;
            }else{
                last = idx;
            }
        }
        reverse(r, idx+1, ele);
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String r = sc.next();
        reverse(r, 0, 't');
    }
}