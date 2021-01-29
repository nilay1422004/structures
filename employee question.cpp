#include <stdio.h>

/*structure declaration*/
struct employee{
    char    name[30];
    int     age;
    int     phone number;
    float   salary;
};

int main()
{
    /*declare structure variable*/
    struct employee emp;

    /*read employee details*/
    printf("\nEnter details :\n");
    printf("Name ?:");          gets(emp.name);
    printf("Age ?:")            scanf("i",&emp.age);
    printf("Phone number ?:");  scanf("%d",&emp.empId);
    printf("Salary ?:");        scanf("%f",&emp.salary);

    /*print employee details*/
    printf("\nEntered detail is:");
    printf("Name: %s"   ,emp.name);
    printf("Phone number: %d"     ,emp.empId);
    printf("Salary: %f\n",emp.salary);
    return 0;
}
