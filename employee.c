#include <stdio.h>
#include <conio.h>

struct details
{
 char name[30];
 int age;
 int phonenumber;
 float salary;
};

int main()

{
 struct details detail;

 printf("\nEnter name:\n");
 gets(detail.name);
 printf("\nEnter age:\n");
 scanf("%d",&detail.age);
 printf("\nEnter phone number:\n");
 scanf("%d",&detail.phonenumber);
 printf("\nEnter Salary:\n");
 scanf("%f",&detail.salary);
 printf("\n\n\n");
 printf("Name of the Employee : %s \n",detail.name);
 printf("Age of the Employee : %d \n",detail.age);
 printf(" Employee phone number : %d \n",detail.phonenumber);
 printf("Salary of the Employee : %f \n",detail.salary); 
}
