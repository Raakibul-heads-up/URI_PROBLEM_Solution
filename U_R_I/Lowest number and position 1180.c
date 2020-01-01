#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int X[N];
    int position = 0,i;

     for(i=0;i<N;i++){
        scanf("%d",&X[i]);
     }

     int min = X[0];
     for(i=1;i<N;i++){
        if(min>X[i]){
            min = X[i];
        position=i;
        }
     }
     printf("Menor valor: %d\n",min);
     printf("Posicao: %d\n",position);
return 0;
}
