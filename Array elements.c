#include<stdio.h>
int main()
{
int a[3][3];
int i,j;
for(i=0;i<3;++i)
{
for(j=0;j<3;++j)
{
printf("Enter the value for array a:", i,j);
sacnf("%d", &a[i][j]);
}
}
printf("\nArray elements:\n");
for(i=0;i<3;++i)
{
for(j=0;j<3;++j)
{
printf("%d", &a[i][j]);
if(j==2)
{ printf("\n");
}
}
