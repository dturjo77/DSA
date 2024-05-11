import java.util.*;

class SubsequenceOfString{
    static ArrayList<String> al = new ArrayList<String>();

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();

        gss(str, "");

        GSS(str, "");
        System.out.println(al);
    }

    public static void gss(String str, String ans){
        if(str.length() == 0){
            System.out.println(ans);
            return;
        }

        gss(str.substring(1), ans+str.charAt(0));
        gss(str.substring(1), ans);
    }

        public static void GSS(String str, String ans){
        if(str.length() == 0){
            al.add(ans);
            return;
        }

        GSS(str.substring(1), ans+str.charAt(0));
        GSS(str.substring(1), ans);
    }
}
