#include<stdio.h>
void main()
{
int b[10],a[10],s[20],i,n,new,k,f=0,j;
printf("\n enter the no of blocks");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n enter the blockno,base address,size");
scanf("%d%d%d",&b[i],&a[i],&s[i]);
b[i]=i+1;
}
printf("\n before allocation ");
printf("\nblock no\tstart address\tblock size");
for(i=0;i<n;i++)
{
printf("\n%d\t%d\t%d",b[i],a[i],s[i]);
}
printf("\n enter the required memory space");
scanf("%d",&new);
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(s[j]>s[j+1])
{
int temp=s[i];
s[i]=s[j];
s[j]=temp;
int temp1=a[i];
a[i]=a[j];
a[j]=temp1;
int temp2=b[i];
b[i]=b[j];
b[j]=temp2;
}
}
}
for(i=0;i<n;i++)
{
if(new<=s[i])
{
a[i]=a[i]+new;
s[i]=s[i]-new;
f=1;
break;
}
}
if(f==0)
printf("no memory");
printf("\n after allocation");
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(b[j]>b[j+1])
{
int temp3=b[j];
b[j]=b[j+1];
b[j+1]=temp3;
int temp4=a[j];
a[j]=a[j+1];
a[j+1]=temp4;
int temp5=s[j];
s[j]=s[j+1];
s[j+1]=temp5;
}
}
}
printf("\n blokno  startaddress  bloksize");
for(i=0;i<n;i++)
{
if(s[i]!=0)
printf("\n%d\t%d\t%d",b[i],a[i],s[i]);
}
}
