#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
    char empname[30];
    char empdept[10];
    int empno;
    double empsalary;
} Employee;
 
int main()
{
    //number of employees
    int n=20;

    //array to store structure values of all employees
    Employee employees[n];
 
    //Taking each employee detail as input
    printf("Enter %d Employee Details \n \n",n);
    for(int i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);

        //empno
        printf("Employee number: ");
        scanf("%d",&employees[i].empno);
        
        //empname
        printf("Name: ");
        scanf("%[^\n]s",employees[i].empname);
        
        //empdept
        printf("Department Name: ");
        scanf("%[^\n]s",employees[i].empdept);

        //empsalary
        printf("Salary: ");
        scanf("%lf",&employees[i].empsalary);

        //to consume extra '\n' input
        char ch = getchar();
 
        printf("\n");
    }
 
    //Displaying Employee details
    printf("-------------- All Employees Details ---------------\n");
    for(int i=0; i<n; i++){
        printf("Id \t: ");
        printf("%d \n",employees[i].empid);
 
        printf("Name \t: ");
        printf("%s \n",employees[i].empname);
        
        printf(" Departmemt Name \t: ");
        printf("%s \n",employees[i].empdept);
       
        printf("Salary \t: ");
        printf("%.2lf \n",employees[i].empsalary);
 
        printf("\n");
    }
 
    return 0;
}
