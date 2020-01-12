#include<stdio.h>
int main(){
    char name[20];
    double fixed_salary,total_sell,total;
    scanf("%s",name);
    scanf("%lf",&fixed_salary);
    scanf("%lf",&total_sell);

    total = fixed_salary + (0.15*total_sell);
    printf("TOTAL = R$ %.2lf\n",total);

return 0;
}
