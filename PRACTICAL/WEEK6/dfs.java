import java.util.*;
public class Main
{
	static int[][] adj;
	static void addEdge(int x, int y)
	{
	    adj[x][y] = 1;
	    adj[y][x] = 1;
	}
	static void dfs(int start, boolean[] visited)
	{
	    visited[start] = true;
	    System.out.print(start + " ");
	    for(int i = 0; i < adj[start].length; i++)
	    {
	        if(adj[start][i] == 1 && (!visited[i]))
	        {
	            dfs(i, visited);
	        }
	    }
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter number of vertices and edges: ");
		int v = sc.nextInt();
		int e = sc.nextInt();
		adj = new int[v][v];
		for(int i = 0; i < 4; i++)
		{
		    System.out.println("Enter edge: ");
		    int x = sc.nextInt();
		    int y = sc.nextInt();
		    addEdge(x, y);
		}
		
		boolean[] visited = new boolean[v];
		dfs(0, visited);
		
	}
}
