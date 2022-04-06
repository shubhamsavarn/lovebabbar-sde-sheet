import java.io.*;
import java.util.*;
class Main {
	public static void main (String[] args) {

		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		sc.nextLine();
		while(t-->0)
		{
		    
		    int n,m;

		    n=sc.nextInt();

		    m=sc.nextInt();

		    int a[]=new int[n];
		    int b[]=new int[m];
		    for(int i=0;i<n;i++)
		    {
		        a[i]=sc.nextInt();
		    }
		    for(int i=0;i<m;i++)
		    {
		        b[i]=sc.nextInt();
		    }
		    Solution ob=new Solution();
		    System.out.println(ob.doUnion(a,n,b,m));
		    System.out.println(ob.doIntersection(a,b));
		}
		
	}
}
class Solution{
    public static int doUnion(int a[], int n, int b[], int m) 
    {
        Set<Integer> sc = new HashSet<>();
        for(int x:a){
            sc.add(x);
        }
        for(int y:b){
            sc.add(y);
        }
        return sc.size();
    }
    public static int doIntersection(int a[],int b[]){
        int count = 0;
        Set<Integer> sc = HashSet<>();
        for(int x:a){
            sc.add(x);
        }
        for(int y:b){
            if(sc.contains(x)){
                count++;
                sc.remove();
            }
        }
        return count;
    }
}
