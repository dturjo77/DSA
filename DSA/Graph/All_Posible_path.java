import java.util.*;

class Edge{
    int src;
    int dest;
    Edge(int s, int d){
        src = s;
        dest = d;
    }
}

class All_Posible_path{

    public static void creatGraph(ArrayList<Edge>graph[]){
        for(int i=0; i<graph.length; i++){
            graph[i] = new ArrayList<Edge>();
        }

        graph[0].add(new Edge(0,1));
        graph[0].add(new Edge(0,2));

        graph[1].add(new Edge(1,0));
        graph[1].add(new Edge(1,3));

        graph[2].add(new Edge(2,0));
        graph[2].add(new Edge(2,4));

        graph[3].add(new Edge(3,1));
        graph[3].add(new Edge(3,4));
        graph[3].add(new Edge(3,5));

        graph[4].add(new Edge(4,2));
        graph[4].add(new Edge(4,3));
        graph[4].add(new Edge(4,5));

        graph[5].add(new Edge(5,3));
        graph[5].add(new Edge(5,4));
        graph[5].add(new Edge(5,6));

        graph[6].add(new Edge(6,5));
    }

    public static void findPaths(ArrayList<Edge>graph[],boolean vis[],String path,int curr,int tar){
        if(curr == tar){
            System.out.println(path);
        }
        //vis[curr] = true;

        for(int i=0; i<graph[curr].size(); i++){
            Edge e = graph[curr].get(i);
            if(vis[e.dest] == false){
                vis[curr] = true;
                findPaths(graph,vis,path+e.dest,e.dest,tar);
                vis[curr] = false;
            }
            //vis[curr] = false;
        }
    }

    public static void main(String args[]){
        ArrayList<Edge>graph[] = new ArrayList[7];
        boolean vis[] = new boolean[7];
        creatGraph(graph);

        int src = 0;
        int tar = 5;
        String path = "0";
        findPaths(graph,vis,path,src,tar);

    }
}