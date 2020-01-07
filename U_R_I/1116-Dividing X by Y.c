#include<stdio.h>
int main(){
    double N;
    int x,y,n;

    scanf("%d",&n);
    while(n){
        scanf("%d%d",&x,&y);
        if(y==0){
            printf("divisao impossivel\n");
        }
        else{
            N = x/(y*1.0);
            printf("%.1lf\n",N);
        }
        n--;
    }

return 0;
}
