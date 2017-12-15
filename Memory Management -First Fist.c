#include<stdio.h>
void main()
{
int b[10],a[10],s[20],i,n,new,k,f=0;
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
if(s[i]>=new)
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
printf("\n blokno  startaddress  bloksize");
for(i=0;i<n;i++)
{
if(s[i]!=0)
printf("\n%d\t%d\t%d",b[i],a[i],s[i]);
//d++;
}
}
