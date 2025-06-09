#include <stdio.h>
int main()
{
    FILE *pFile = fopen("test.txt", "w");
    char text[100];

    if(pFile==NULL)
    {
        printf("File not found...");
        return 1;
    }

    printf("Enter the file content: ");
    fgets(text, 100, stdin);

    fprintf(pFile, "%s", text);

    printf("File is written successfully");

    /*if(remove("new.txt")==0)
        printf("The file has been deleted...");
    else
        printf("Unable to delete file...");*/
    
    fclose(pFile);
}