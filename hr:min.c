#include <stdio.h>
#include <conio.h>
int main(void)
 {
	int shr,smt,ehr,emt; 
	int r1,r2,res,min,sec;
	printf("enter the start time hours and minutes");
	scanf("%d %d",&shr,&smt);
	printf("\nenter the end time hours and minutes");
	scanf("%d %d",&ehr,&emt);
	if(shr>ehr)
        {
		ehr=ehr+12;
	}
	r1=(shr*60)+smt;
	r2=(ehr*60)+emt;
	res=r2-r1;
	min=res/60;
	sec=res%60;
	printf("\n%dhr:%dsec\n%dhr:%dsec",shr,smt,ehr,emt);
	printf("\nthe difference is:\n%dhr:%dmin",min,sec);
	return 0;
}
