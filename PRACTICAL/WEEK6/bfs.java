import java.util.*;
 
class bfs{
 
static class Graph
{
    int v;
    int e;
    int[][] adj;
 
    // Function to fill the empty adjacency matrix
    Graph(int v, int e)
    {
        this.v = v;
        this.e = e;
         
        adj = new int[v][v];
        for(int row = 0; row < v; row++)
            Arrays.fill(adj[row], 0);
    }

    void addEdge(int start, int e)
    {
        adj[start][e] = 1;
        adj[e][start] = 1;
    }

    void BFS(int start)
    {
         
        // Visited vector to so that
        // a vertex is not visited more than once
        // Initializing the vector to false as no
        // vertex is visited at the beginning
        boolean[] visited = new boolean[v];
        Arrays.fill(visited, false);
        List<Integer> q = new ArrayList<>();
        q.add(start);
 
        // Set source as visited
        visited[start] = true;
 
        int vis;
        while (!q.isEmpty())
        {
            vis = q.get(0);
 
            // Print the current node
            System.out.print(vis + " ");
            q.remove(q.get(0));
 
            // For every adjacent vertex to
            // the current vertex
            for(int i = 0; i < v; i++)
            {
                if (adj[vis][i] == 1 && (!visited[i]))
                {
                     
                    // Push the adjacent node to
                    // the queue
                    q.add(i);
 
                    // Set
                    visited[i] = true;
                }
            }
        }
    }
}

public static void main(String[] args)
{
    Scanner sc = new Scanner (System.in);
    System.out.println("Enter number of vertices and edges: ");
    int v = sc.nextInt();
    int e = sc.nextInt();
    Graph G = new Graph(v, e);
    for(int i = 0; i < e-1; i++)
    {
        System.out.println("Enter edge: ");
        int x = sc.nextInt();
        int y = sc.nextInt();
        G.addEdge(x, y);
    }
 
    G.BFS(0);
}
}