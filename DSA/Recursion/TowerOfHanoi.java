class TowerOfHanoi{
    public static void main(String[] args){
    System.out.println("number of bars");
    TOH(3, 'S', 'H', 'D');
    }

    public static void TOH(int n, char src, char hpr, char dest){
        if(n == 1){
            System.out.println(src + "->" + dest);
            return;
        }

        TOH(n-1, src, dest, hpr);
        TOH(1, src, hpr, dest);
        TOH(n-1, hpr, src, dest);
    }
}