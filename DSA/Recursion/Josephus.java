/*                                PROUBLEM STATEMENT
Suppose there are n people standing in a circle waiting to be executed. Starting with person 1, 
a sword is passed from one person to the next around the circle. After every k people, 
the person holding the sword is executed, and the process continues until only one person remains.
The problem is to find out which position in the circle one should stand in to avoid being executed.
*/



import java.util.Scanner;

class Josephus{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("input number of peoples");
        int N = sc.nextInt();
        System.out.println("killing factors");
        int K = sc.nextInt();
        System.out.println(jos(N,K)+1);
    }

    public static int jos(int n, int k){
        if(n == 1){
            return 0;
        }
        return (jos(n-1,k) + k) % n;
    }
}