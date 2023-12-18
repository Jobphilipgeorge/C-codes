#include<stdio.h>
void main(){
int n,i,j,fn,a[50],f[50],avail=0,hit=0,fault=0,rear=0;
printf("Enter the no of pages:");
scanf("%d",&n);
printf("Enter the Pages:");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("Enter the frame num:");
scanf("%d",&fn);
for(i=0;i<fn;i++)
f[i]=-1;
for(i=0;i<n;i++)
{
int p=0;
for(j=0;j<fn;j++)
{
if(f[j]==a[i])
{
hit++;
p=1;
break;
}
}
if(p==0)
{
f[rear]=a[i];
fault++;
rear=(rear+1)%fn;
}
printf("\npage:%d\t",a[i]);
for(j=0;j<fn;j++){
if(f[j]==-1)
printf("\t");
else
printf("%d \t",f[j]);
}
}
printf("\n page hit:%d",hit);
printf("\n page fault:%d",fault);
}
