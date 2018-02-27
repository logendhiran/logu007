include<stdio.h>

int main()
{

int time,mins,sub;

printf("ENTER THE TIME AND MINS:",time,mins);

time=time/24;

mins=time%60;

sub=time-mins/24-60;

printf("SAME FORMAT OF TIME AND MINS:,sub);

return 0;

} 
