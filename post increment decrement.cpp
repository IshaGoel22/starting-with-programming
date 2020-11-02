//post increment ,decrement
#include<stdio.h>
  int main()
{
	int a,b,c;
	a=6;
	b=a++;
	printf("value of a is %d\n",a);
	printf("value of b is %d\n",b);
	c= a++ + b--;
	printf("value of c is %d\n",c);
 printf("a=%d \n b=%d",a,b);
 
	return 0;
}
