import java.util.*;
class RatMaze2D{
    public static void main(String[] args){
        int er =3;
        int ec =3;

        System.out.println(numberOfWay(1,1,er,ec));
        numberOfPath(1,1,er,ec,"");

    }

    public static int numberOfWay(int sr, int sc, int er, int ec){
        if(sr > er || sc > ec) return 0;
        if(sr == er && sc == ec) return 1;

        return numberOfWay(sr+1, sc, er, ec) + numberOfWay(sr, sc+1, er, ec);
    }

    public static void numberOfPath(int sr, int sc, int er, int ec, String s){
        if(sr > er || sc > ec) return;

        if(sr == er && sc == ec) {
            System.out.println(s);
            return;
        }

        numberOfPath(sr+1, sc, er, ec, s+'D');  //go down
        numberOfPath(sr, sc+1, er, ec, s+'R');  //go right
    }
}