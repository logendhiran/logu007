#include<stdio.h>

#include<conio.h>

#include<string.h>

int main()
{
   clrscr();
   
   int i,j,l1,l2,count=0;
   
   char s1[100],s2[100];

   scanf("%s %s",s1,s2);
   
   l1=strlen(s1);
   
   l2=strlen(s2);
   
   if(l2==l1)

   {
   for(i=0;i<l1;i++)
   
   {
     if(s1[i]!=s2[i])
     count++;
     
   }
   if(count==1)
   
       printf("yes");
   {
   else
   }
   
   printf("no");
   }
   
   else
   
   {
   printf("no");
   
   }
   
    return 0;
}
