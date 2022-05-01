#include<studio.h>
int main()
{
int a=100,b=200;
printf("Before Swapping a = %d b = %d ",a,b);
//Before Swapping a = 100 b = 200;
a=a+b;
//a=100+200=300;
b=a-b;
//b=300-200=100;
a=a-b;
//a=300-100=200;
printf("After Swapping a = %d b = %d ",a,b);
//After Swapping a = 200 b = 100 
return 0;
}
