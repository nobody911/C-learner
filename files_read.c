#include <stdio.h>
#define SIZE 1024
int main()
{
    FILE *pF = fopen("test.txt", "r");
    char buffer[SIZE];
    if(pF == NULL)
    {
        printf("Cannot locate file...");
        return 1;
    }
    while(fgets(buffer, sizeof(buffer), pF) != NULL)
        printf("%s", buffer);
    fclose(pF);
    return 0;
}