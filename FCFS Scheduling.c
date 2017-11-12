#include<stdio.h>
void main()
{
float sum=0.0,avg_wt,avg_t,sum1=0.0;
int n,a[5],b[5],w[5],t[5],i;
printf("enter the no of process");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("enter the processes and burst time");
scanf("%d%d",&a[i],&b[i]);
}
printf("the process and burst time is ");
for(i=0;i<n;i++)
{
printf("%d       %d",a[i],b[i]);
printf("\n");
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

printf("\nthe p\t \tburst time\t \t waiting time\t \t turnaround time are");
for(i=0;i<n;i++)
{
printf("\n %d\t\t %d\t\t %d\t\t %d",a[i],b[i],w[i],t[i]);
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
printf("\t\t%d\t",t[i]);
}
printf("\n average waiting time=%f",avg_wt);
printf("\n average turnaroundtime=%f",avg_t);
}

