#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    
    int i,j,t,b;
    
    printf("Enter any possible  value");
    
    scanf("%s",&s);
    
    for(i=0;s[i]!='\0';i++)
    
    {
        for(j=i+1;s[j]!='\0';j++)
        
        {   
        
            if(s[i]>s[j])
            
            {
            
            t=s[i];
            
            s[i]=s[j];
            
            s[j]=t;
            
            }
            
        }
        
    }
    
    for(i=0;s[i]!='\0';i++)
    
    {
    
        printf("%c",s[i]);
        
    } return 0;
}
