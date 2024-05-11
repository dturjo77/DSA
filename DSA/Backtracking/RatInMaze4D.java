
class RatInMaze4D{

    public static void main(String[] args){
        int er = 3;
        int ec = 3;
        boolean[][] track = new boolean[er][ec];
        
        posiblePath(0,0,er-1,ec-1,"",track);
    }

    public static void posiblePath(int sr, int sc, int er, int ec, String s, boolean[][] track){
        if(sr > ec || sc > ec || sr < 0 || sc < 0) return;
        if(track[sr][sc] == true) return;
        if(sr == er && sc == ec){
            System.out.println(s);
            return;
        }
        track[sr][sc] = true;

        posiblePath(sr+1, sc, er, ec, s+'D',track);  //go down
        posiblePath(sr, sc+1, er, ec, s+'R',track);  //go right
        posiblePath(sr-1, sc, er, ec, s+'U',track);  //go up
        posiblePath(sr, sc-1, er, ec, s+'L',track);  //go laft
        //Backtrack
        track[sr][sc] = false;
    }
}