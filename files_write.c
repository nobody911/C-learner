#include <stdio.h>
int main()
{
    FILE *pF = fopen("new.txt", "a");
    fprintf(pF, "U piece of shit\n");
    fclose(pF);
    if(remove("new.txt")==0)
        printf("The file has been deleted...");
    else
        printf("Unable to delete file...");
    return 0;
}