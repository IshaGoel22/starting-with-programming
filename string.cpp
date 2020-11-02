/*print string
diff btw scanf and gets*/
#include<stdio.h>
int main()
{
	char string[10];
	printf("enter your name \n");
//	scanf("%s",string);
	gets(string);
	printf("entered string is %s",string);
	return 0;
}
// scanf me agr space dale to vo us string ko complete samjh leta h
  // jbki gets me space consider hoti h
