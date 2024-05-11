import java.util.Scanner;

class BalancedParenthese{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.println("number of parentheses pair?");
        int n = sc.nextInt();
        char[] cr = new char[n*2];
        balPar(cr, n, 0, 0, 0);
    }

    public static void balPar(char[] cr,int n,int i,int o,int c){
        if(i == cr.length){
            System.out.println(cr);
            //return;
        }
        //enter oppening
        if(n > o){
            cr[i] = '(';
            balPar(cr, n, i+1, o+1, c);
        }
        //enter closeing
        if(o > c){
            cr[i] = ')'; 
            balPar(cr, n, i+1, o, c+1);
        }
    }

}