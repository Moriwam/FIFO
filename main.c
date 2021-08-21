#include<stdio.h>
#include<stdlib.h>
int main()
{
int i, j, n, a[100], FrS[100], f, k, x, PF=0, PR=0;
 freopen("input.txt","r",stdin);
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 scanf("%d",&a[i]);
 scanf("%d",&f);
 for(i=0;i<f;i++)
 FrS[i]= -1;
 j=0;
 for(i=1;i<=n;i++)
 {
 x=0;
 for(k=0;k<f;k++)
 if(FrS[k]==a[i])
 x=1;
 if (x==0)
 {
 FrS[j]=a[i];
 j=(j+1)%f;
 PF++;
 }
}
 PR= PF-f;
 printf("\n ***********************************************");
 printf("\n First In First Out (FIFO) algorithm\n");
 printf(" ***********************************************\n");
 printf("\n 1. Number of page fault is : %d ",PF);
 printf("\n 2. Number of page replacement is : %d \n",PR);
 return 0;
}