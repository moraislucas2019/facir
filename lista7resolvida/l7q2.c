  #include <stdio.h>


int main(){





 char frase[200];
    int quantid;

    scanf("%s", &frase);

    quantid = contar(frase);

    printf("%d", quantid);

    return 0;
    system("PAUSE");
}
int contar(char *str)
{
    int total=0;
    while( str[total] != '\0')
        total++;
    return total;









return 0;
