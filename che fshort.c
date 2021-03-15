#include<stdio.h>
int main()
{ int t,first,last,temp,i,j,x[1000];
scanf("%d",&t);

   for(i=0;i<t;i++){
  scanf("%d",&x[i]);}

 for(i=0;i<t;i++)
{
    for(j=i+1;j<t;j++)
    {
       if(x[i]>x[j])
       {
         temp = x[i];
         x[i] = x[j];
         x[j] = temp;

       }
    }

}
    for(i=0;i<t;i++)
    {



    printf("%d\n",x[i]);


}
return 0;
}

