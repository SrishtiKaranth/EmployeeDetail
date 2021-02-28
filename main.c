#include<stdio.h>
struct employee
{
    int empno,age,salary;
    char empname[25];
    char depname[30];
}emp[20];

void main()
{
    int i,n;
    printf("Enter employee information \n");
    printf("Enter the employee number \n");
    scanf("%d",&n);
    printf("Employee name -\n");
    printf("Employee age-\n");
     printf("Employee department -\n");
      printf("Employee phone number-\n");
       printf("Employee salary-\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",emp[i].empname);
        scanf("%d",&emp[i].age);
        scanf("%s",emp[i].depname);
        scanf("%d",&emp[i].empno);
        scanf("%d",&emp[i].salary);
    }
    printf("\nNAME\t\t DEPARTMENT\t\t AGE\t\t PHONE NUMBER\t\t SAlARY\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t\t%s\t\t%d\t\t%d\t\t%d\n",emp[i].empname,emp[i].depname,&emp[i].age,&emp[i].empno,&emp[i].salary);
    }
}
