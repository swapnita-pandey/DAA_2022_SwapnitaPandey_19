import java.util.*;
class q1
{
        public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
		System.out.println("Enter size of array: ");
		int n = sc.nextInt();
		char a[] = new char[n];
		System.out.println("Enter the array: ");
		for(int i = 0; i < n; i++)
		{
		    a[i] = sc.next().charAt(0);
		}
		Arrays.sort(a);
		int c = 1;
		int max = 0;
		char maxele = a[0];
		for(int i = 0; i < n-1; i++)
		{
		    if(a[i] == a[i+1])
		    {
		        c++;
		    }
		    else
		        c = 1;
		    if(c > max)
		    {
		        max = c;
		        maxele = a[i];
		    }
		}
		System.out.println(maxele);
	}
}
