#include<stdio.h>
void main()
{
    int v,i,j,a[100],b[100],k,f=0,p=0; 
    scanf("%d", &n);
    for(i=0; i<v; i++)
    {
	     scanf("%d",&a[i]);
       b[i] = -1;
}

    for(i=0;i<v;i++)
        {
           p=1;
            for(j=i+1;j<v;j++)
            {
                if(a[i] == a[j])

                {
		p++;

                b[j] = 0;
            }            
        }

        if(b[i] != 0)

        {
       b[i]=p;

        }
	}
    for(i=0;i<v;i++)

    {
        if(b[i] == 1)

        {
		
            printf("%d",a[i]);
    }
}
}
