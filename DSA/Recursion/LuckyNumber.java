import java.util.*;
class LuckyNumber{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        System.out.println(lucky(n, 2));
    }
    public static boolean lucky(int n, int count){
        if(n < count){
            return true;
        }
        if(n%count == 0){
            return false;
        }

        return lucky(n-(n/count), count+1);
    }
}