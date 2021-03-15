#include<stdio.h>
#include<string.h>
int main()
{
  int a,b,c,t,i,x;
    scanf("%d",&t);
    while(t--)
    {
         x=0;
       char l,b[100];

        scanf("%d%s",&a,&b[100]);{
        for(i=0;i<a;i++)
           if(b[i]=='y')
        {
          x=1;

          printf("NOT INDIAN\n");
          break;
        }
       else if(b[i]=='I')
        {
          x=1;
          printf("INDIAN\n");
          break;
            }
    }
    if(x!=1)
        printf("NOT SURE\n");}
    return 0;
    }







