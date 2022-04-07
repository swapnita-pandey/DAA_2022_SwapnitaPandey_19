import java.util.*;
class q3
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);

		System.out.println("Enter size of two arrays: ");
		int m = sc.nextInt();
		int n = sc.nextInt();
		int a1[] = new int[m];
		int a2[] = new int[n];
		System.out.println("Enter the first array: ");
		for(int i = 0; i < m; i++)
		{
		    a1[i] = sc.nextInt();
		}
		System.out.println("Enter the second array: ");
		for(int i = 0; i < n; i++)
		{
		    a2[i] = sc.nextInt();
		}
		for(int i = 0, j = 0; i < m && j < n && a1[i] <= a2[n-1] && a2[j] <= a1[m-1]; i++)
		{
		    if(a1[i] == a2[j])
		    {
		        System.out.print(a1[i] + " ");
		    }
		    else if(a1[i] < a2[j])
		    {
		        i++;
		    }
		    else
		        j++;
		}
	}
}
