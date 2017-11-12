#include<stdio.h>
int main()
{
int btcopy[10],bt[10],p[10],qc[10],q,i,n,j,k,wt[10],tat[10],tattemp=0,f1=1,f2=1,t;
float twt=0,ttat=0,avgwt=0,avgtat=0;
printf("enter the no of process");
scanf("%d",&n);
printf("\nEnter the tym quantum");
scanf("%d",&q);
for(i=0;i<n;i++)
{
printf("enter the  burst time of p%d: ",i+1);
scanf("%d",&bt[i]);
btcopy[i]=bt[i];
p[i]=i+1;
}   
printf("\n\ngantt chart\n");
wt[0]=0;
t=0;
qc[0]=0;
for(i=0;i<n;i++)
{
qc[i]=0;
}
while(f1==1)
{
for(i=0;i<n;i++)
{
if(bt[i]<=q)
{
if(bt[i]<=q&&bt[i]!=0)
{
printf("  |p%d",p[i]);
if(t!=0)
qc[t]=qc[t-1]+bt[i];
else

qc[t]=qc[t]+bt[i];
tat[i]=qc[t];
wt[i]=tat[i]-btcopy[i];
bt[i]=0;
printf("|\t");
t++;
}
}
else if(bt[i]>q)
{
printf("  |p%d",p[i]);
if(t!=0)
qc[t]=qc[t-1]+q;
else
qc[t]=qc[t]+q;
bt[i]=bt[i]-q;
printf("|\t");
t++;
}
}
for(k=0;k<n;k++)
{
if(bt[k]!=0)
{
f1=1;
break;
}
else
f1=0;
}
}

printf("\n");
printf("0");
for(i=0;i<t;i++)
{
printf("\t%d",qc[i]);
}
printf("\n p\tbt\twt\ttat");
for(i=0;i<n;i++)
{
ttat=ttat+tat[i];
printf("\np%d\t%d\t%d\t%d",p[i],btcopy[i],wt[i],tat[i]);
twt=twt+wt[i];
}
avgtat=ttat/n;
avgwt=twt/n;
printf("\n\n total waitg tym:%.2f",twt);
printf("\ntotal tat:%.2f",ttat);
printf("\navg waitng tym:%.2f",avgwt);
printf("\navg tat:%.2f",avgtat);
printf("\n\n");
return 0;
}





