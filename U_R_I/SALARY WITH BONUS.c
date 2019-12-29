#include<stdio.h>
int main(){
    double total_sell,fixed_salary,total_salary;
    char first_name[50];
    scanf("%s",first_name);
    scanf("%lf",&fixed_salary);
    scanf("%lf",&total_sell);
    total_salary = fixed_salary+(.15*total_sell);
    printf("TOTAL = R$ %.2lf\n",total_salary);
return 0;
}
