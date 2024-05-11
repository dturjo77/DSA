import java.util.Scanner;
class ReverseString{
    public static String reverseStr(String s, String r, int i){
        if(i < 0){
            return r;
        }
        return reverseStr(s, r+s.charAt(i), i-1);
    }
    public static void Reversestr(String s, int i){
        if(i < 0){
            return;
        }
        System.out.print(s.charAt(i));
        Reversestr(s, i-1);
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        System.out.println(reverseStr(s, "", s.length()-1));
        Reversestr(s, s.length()-1);
    }
}