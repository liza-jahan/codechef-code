#include<stdio.h>
int main()
{ int i,T;
scanf("%d",&T);
while(T--)
{
    long int N,K,c=0;
   scanf("%ld%ld",&N,&K);
   for(i=0;i<=K;i++)
   if (c<N%i)
   {
       c=N%i;
   }

    printf("%ld\n",c);


}
    return 0;
}
