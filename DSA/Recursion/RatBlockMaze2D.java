
class RatBlockMaze2D{
    public static void main(String[] args){
        int er =3;
        int ec =3;
        int[][] maze = {{1,1,0},
                        {1,1,1},
                        {1,1,1}};

        //System.out.println(numberOfWay(1,1,er,ec));
        numberOfPath(0,0,er-1,ec-1,"",maze);
    }
public static void numberOfPath(int sr, int sc, int er, int ec, String s,int[][] maze){
        if(sr > er || sc > ec) return;

        if(sr == er && sc == ec) {
            System.out.println(s);
            return;
        }
        if(maze[sr][sc] == 0) return;

        numberOfPath(sr+1, sc, er, ec, s+'D', maze);  //go down
        numberOfPath(sr, sc+1, er, ec, s+'R', maze);  //go right
    }
}