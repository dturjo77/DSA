import java.util.*;
class PowerOfX{
    public static void main(String[] srgs){
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();

        System.out.println(worstPow(x,y));
        System.out.println(averagePow(x,y));
        System.out.println(bestPow(x,y));
    }

    public static int worstPow(int x, int y){
        if(y == 0){
            return 1;
        }
        return worstPow(x,y-1) * x;
    }

    public static int averagePow(int x, int y){
        if(y == 0){
            return 1;
        }
        if(y%2 == 0){
            return averagePow(x,y/2) * averagePow(x,y/2);
        } else {
            return averagePow(x,y-1) * x;
        }
    }

    public static long bestPow(int x, int y){
        if(y == 0){
            return 1;
        }
        if(y%2 == 0){
            long res = bestPow(x,y/2);
            return res * res;
        } else {
            return bestPow(x,y-1) * x;
        }
    }
}