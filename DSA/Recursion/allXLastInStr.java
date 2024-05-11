
class allXLastInStr{
    public static void xEnd(String str,int count,int idx,String newStr){
        if(idx == str.length()-1){
            for(int i=0; i<count; i++){
                newStr += 'x';
            }
            System.out.println(newStr);
            return;
        }
        char current = str.charAt(idx);
        if(current == 'x'){
            count++;
            xEnd(str, count, idx+1, newStr);
        }else{
            newStr += current;
            xEnd(str, count, idx+1, newStr);
        }
    }
    public static void main(String[] args){
        String str = "turxtyuxxsghx";
        xEnd(str, 0, 0, "");
    }
}