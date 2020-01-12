#include<stdio.h>
int main(){
    int num,hr;
    float salary,total;
    scanf("%d",&num);
    scanf("%d",&hr);
    scanf("%f",&salary);

    total = hr*salary;
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2f\n",total);

return 0;
}
