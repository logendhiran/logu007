#include <stdio.h>
int main(void)
 {

	int c,b,temp;

	printf("Enter the two numbers");

	scanf("%d%d",&c,&b);

	temp=b;

	b=c;

	c=temp;

	printf("%d %d",c,b);

	return 0;
}
