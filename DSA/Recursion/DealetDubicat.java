
class DealetDubicat{
    public static boolean[] arr = new boolean[26];

    public static void delDub(String str,int idx,String newStr){
        if(str.length() == idx){
            System.out.println(newStr);
            return;
        }
        char current = str.charAt(idx);
        if(arr[current - 'a']){
            delDub(str, idx+1, newStr);
        }else{
            newStr += current;
            arr[current - 'a'] = true;
            delDub(str, idx+1, newStr);
        }
    }
    public static void main(String[] args){
        String str = "abbbacccdbadcbadcabdcabd";
        delDub(str, 0, "");
    }
}