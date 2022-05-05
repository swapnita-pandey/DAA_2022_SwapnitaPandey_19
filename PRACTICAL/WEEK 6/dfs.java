import java.util.*;
class dfs
{
    private LinkedList<Integer> adjLists[];
    private int visited[];

    dfs(int vertices)
    {
        adjLists = new LinkedList[vertices];
        visited = new int[vertices];

        for(int i = 0; i < vertices; i++)
        {
            adjLists[i] = new LinkedList<Integer>();
        }
    }

    void addEdge(int src, int dest)
    {
        adjLists[src].add(dest);
    }

    void DFS(int v)
    {
        visited[v] = 1;
        System.out.print(v + " ");

        Iterator <Integer> ite = adjLists[v].listIterator();
        while(ite.hasNext())
        {
            int adj = ite.next();
            if(visited[adj] == 0)
                DFS(adj);
        }
    }

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of edges: ");
        int e = sc.nextInt();
        dfs g = new dfs(e);

        System.out.println("Input the value of source node and destination node: ");
        for(int i = 0; i < e; i++)
        {
            int src = sc.nextInt();
            int dest = sc.nextInt();
            g.addEdge(src, dest);
        }

        System.out.println("Enter the node to be searched: ");
        int n = sc.nextInt();
        g.DFS(n);
    }
}
