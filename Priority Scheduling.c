#include<stdio.h>
void main()
{
int a[10],b[10],w[10],t[10],i,n,j,temp,prio[10];
float sum=0.0,avg_wt,avg_t,sum1=0.0;
printf("enter the no of process");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the processes and burst time &priorities");
scanf("%d%d%d",&a[i],&b[i],&prio[i]);
}
/*sort*/
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(prio[i]>prio[j])
{
temp=prio[i];
prio[i]=prio[j];
prio[j]=temp;
int temp1=a[i];
a[i]=a[j];
a[j]=temp1;
temp=b[i];
b[i]=b[j];
b[j]=temp;
}
}
}
w[0]=0;
for(i=1;i<n;i++)
{
w[i]=w[i-1]+b[i-1];
sum=sum+w[i];
}
avg_wt=sum/n;
for(i=0;i<n;i++)
{
t[i]=w[i]+b[i];
sum1=sum1+t[i];
}
avg_t=sum1/n;
printf("\nthe p\t \tburst time\tpriority \t w time\t \t ta time are");
for(i=0;i<n;i++)
{
printf("\n %d\t\t %d\t\t %d\t\t %d\t\t%d",a[i],b[i],prio[i],w[i],t[i]);
}
printf("\n");
for(i=0;i<n;i++)
{
printf("|\t%d\t",a[i]);
}
printf("|");
printf("\n");
printf("0");
for(i=0;i<n;i++)
{
printf("\t\t%d ",t[i]);
}
printf("\n average waiting time=%f",avg_wt);
printf("\n average turnaroundtime=%f",avg_t);
}

