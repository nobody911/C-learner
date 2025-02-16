#include <stdio.h>
int main()
{
    FILE *pF = fopen("new.txt", "a");
    fprintf(pF, "U piece of shit\n");
    fclose(pF);
    return 0;
}