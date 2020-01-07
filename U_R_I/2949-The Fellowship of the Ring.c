#include<stdio.h>
#include<string.h>

int main(){

    int n;
    char ch;
    char name[100];
    int N[5] = { 0 };

    scanf("%d", &n);

    while (n--)
    {

        scanf("%s %c", name, &ch);

        if (ch == 'X')
            N[0]++;
        else if (ch == 'H')
            N[1]++;
        else if (ch == 'E')
            N[2]++;
        else if (ch == 'A')
            N[3]++;
        else
            N[4]++;

    }

    printf("%d Hobbit(s)\n", N[0]);
    printf("%d Humano(s)\n", N[1]);
    printf("%d Elfo(s)\n", N[2]);
    printf("%d Anao(s)\n", N[3]);
    printf("%d Mago(s)\n", N[4]);

return 0;
}
