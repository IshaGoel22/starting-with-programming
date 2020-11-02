/*left shift operators

IF WE WANT TO SHIFT A NUMBER WITH BASE 10 BY 3 TO LEFT ,THEN NUMBER AFTER SHIFTING WILL BE (NUMER*1000) 
 IF WE WANT TO SHIFT A NUMBER WITH BASE 8 BY 2 TO LEFT ,THEN NUMBER AFTER SHIFTING WILL BE (NUMBER*4) */
 
#include<stdio.h>
int main()
{
	int no,a;
	no=2;  
	a=5;
	printf("%d",a<<no);
	return 0;
}
