#include <stdio.h>
#include <string.h>
#define MAXS 1000

int verifstring(char s[], int i, int j){
    if(i >= j) return 1;
    if(s[i] != s[j]) return 0;
    else(verifstring(s, i+1, j-1));
}

int main()
{
    char str[MAXS]; int i = 0, j;
    scanf("%s", str);
    j = strlen(str) - 1;
    printf("Tamanho: %d\n", j+1);
    if(verifstring(str, i, j))  printf("É palíndrome: %s", str);
    else printf("Não é palíndrome: %s", str);
    return 0;
}

