#include<stdio.h>
void main()
{
int allocation[20][20],max[20][20],need[20][20],available[20],sequence[20];
int m,n,status,c=0,completed=0,count;
int i,j,step;
printf("enter no. of processes and resources:");
scanf("%d%d",&m,&n);
printf("enter allocated matrix:");
for(i=0;i<=m-1;i++){
for(j=0;j<=n-1;j++){
scanf("%d",&allocation[i][j]);
}}
printf("enter max matrix:");
for(i=0;i<=m-1;i++){
for(j=0;j<=n-1;j++){
scanf("%d",&max[i][j]);
}}
for(i=0;i<=m-1;i++){
for(j=0;j<=n-1;j++){
need[i][j]=max[i][j]-allocation[i][j];
}}
printf("enter available resources:");
for(i=0;i<=n-1;i++){
scanf("%d",&available[i]);
}
for(i=0;i<=m-1;i++){
status[i]=0;
}
for(step=0;step<=m-1;step++){
for(i=0;i<=m-1;i++){
if(status[i]==0){
count=0;
for(j=0;j<=n-1;j++){
if(need[i][j]<=available[i][j])
count++;
}}
if(count==n){
for(j=0;j<=n-1;j++)
available[j]+=allocation[i][j];}
status[i]=1;
sequence[c]=i+1;
c++;
completed++;
}}
if(completed==m)
printf("system is in unsafe state...");
for(i=0i<=m-1;i++)
printf("%d-->",sequence[i]);
else
printf("system is in unsafe state...");
}
