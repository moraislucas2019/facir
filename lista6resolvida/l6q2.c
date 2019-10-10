#include <stdio.h>


int main(){





 char frase[2000000];
    int quant;

    scanf("%s", &frase);

    quant = contar(frase);

    printf("%d", quant);

    return 0;
    system("PAUSE");
}
int contar(char *str)
{
    int total=0;
       while  ( str[total] != '\0')
        total++;
    return total;









return 0;

}


