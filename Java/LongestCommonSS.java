import java.util.*;
import java.lang.Math.*;
class lcs
{
	Scanner sc=new Scanner(System.in);
	String first="";
	String second="";
	char []af=new char[20];						//  Array for first
	char []as=new char[20];						//  Array for second
	char []ans=new char[20];					// final matching string
	int fl,sl,k=0;								// fl = length of first string  sl = second
	int a[][]=new int[100][100];				// final table
	void enter()
	{
		System.out.println("enter first string");
		first=sc.next();
		System.out.println("enter second string");
		second=sc.next();
		fl=first.length();
		sl=second.length();
		af=first.toCharArray();
		as=second.toCharArray();
	}
	void matrix()
	{
		for(int i=0;i<fl;i++)
			a[i][0]=0;
		for(int i=0;i<sl;i++)
			a[0][i]=0;
		for(int i=1;i<=fl;i++)
		{
			for(int j=1;j<=sl;j++)
			{
				if(af[i-1]==as[j-1])					//   Compare from first element of array : from 0
				{
					a[i][j]=a[i-1][j-1]+1;
				}
				else
				{
					if(a[i-1][j]>=a[i][j-1])
						a[i][j] = a[i-1][j];
					else
						a[i][j] = a[i][j-1];
				}
			}
		}

		back(fl-1,sl-1);
	}
	void back(int l1,int l2)					//  For Back Tracing
	{
		if(l1==0 || l2==0)
		{
			ans[k] = as[l1];
			return;

		}
		if(af[l1]==as[l2])
		 {
			ans[k]=af[l1];
			k++;
			back(l1-1,l2-1);
		}
		else
		{
				if(a[l1-1][l2]>=a[l1][l2-1])
				{
					back(l1-1,l2);
				}
				else
				{
					back(l1,l2-1);
				}
		}
	}
	void display()
	{
		System.out.println();
		for(int i=0;i<=fl;i++)
		{
			for(int j=0;j<=sl;j++)
			{
				System.out.print(a[i][j]+"   ");
			}
			System.out.println();
		}
		System.out.println();
		for(int i=ans.length-1;i>=0;i--)
		{	if(ans[i] != '\0')
				System.out.print(ans[i]+" ");
		}
	}
}
public class LongestCommonSS
{
	public static void main(String z[])
	{
		lcs l=new lcs();
		l.enter();
		l.matrix();
		l.display();
	}
}
