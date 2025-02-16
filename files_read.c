#include <stdio.h>
int main()
{
    FILE *pF = fopen("new.txt", "r");
    char buffer[255];
    if(pF == NULL)
        printf("Unable to open file");
    else
    {
        while(fgets(buffer, 255, pF) != NULL)
            printf("%s", buffer);
    }    
    return 0;
}