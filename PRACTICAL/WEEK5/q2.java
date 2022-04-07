import java.util.*;
class q2
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
		System.out.println("Enter size of array: ");
		int n = sc.nextInt();
		int a[] = new int[n];
		System.out.println("Enter the array: ");
		for(int i = 0; i < n; i++)
		{
		    a[i] = sc.nextInt();
		}
		System.out.println("Enter the key: ");
		int key = sc.nextInt();
		Arrays.sort(a);
		int x = 0;
		int y = n-1;
		int flag = 0;
		while(x<y)
		{
		    if((a[x] + a[y]) == key)
		    {
		        System.out.println(a[x] + " " + a[y]);
		        flag = 1;
		        break;
		    }
		    else if((a[x] + a[y]) < key)
		        x++;
            else
                y--;
		}
		if(flag == 0)
		    System.out.println("No such 2 elements");
	}
}
