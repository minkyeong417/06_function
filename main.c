#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int fact(int x)
	{
		int i,plex;
		
		plex=x;
		
		for (i=x-1;i>0;i--)
		{
			plex=plex*i;
		}
		
		return plex;
	 } 

	int comb(int a,int b)
	{
		int res;
		res=fact(a)/(fact(b)*fact(a-b));
		return res;
		
	}

	int main(int argc,char*argv[]) 
	
	{
		int n,r,result;
		
		printf("input two integars:");
		
		scanf("%d%d",&n,&r );
		
		result=comb(n,r);
		
		printf("%d C %d = %d ",n,r,result);
		
		return 0;
	}
	
