#include <stdio.h>
#include <string.h>
int main()
{
    char x[]="water", y[]="lemonade", temp[15];
    printf("x = %s\n", x);
    printf("y = %s\n", y);

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("\nx = %s\n", x);  
    printf("y = %s", y);  
    return 0;
}