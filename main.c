#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int sumTwo(int a,int b)
	{
		int output;
		output=a+b;
		return output;
	}
	
	int square(int n)
	{
		return n*n;
	}
	
	int get_max(int a,int b)
	{
		if (a>b) return a;
		else return b;
	}
	
	
	int main(int argc,char*argv[]) 
	
	{
	int x;
	int y;
	x=5;
	y=6;
	
	int result;
	result=square(x);
	
	printf("square: %d\n",result);
	printf("sumTwo: %d\n",sumTwo(x,y));
	
	return 0;
	}
