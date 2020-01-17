#include<stdio.h>
int main(){
    int time,speed;
    scanf("%d %d",&time,&speed);

    float distance = time*speed;

    printf("%.3f\n",(distance/12));

return 0;
}
