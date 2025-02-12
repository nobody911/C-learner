 #include <stdio.h>
 #include <ctype.h>
 enum Days{sun=1, mon=2, tue=3, wed=4, thu=5, fri=6, sat=7};
 int main()
 {
    enum Days today=sat;
    // printf("Enter today's day: ");
    // scanf("%d", &today);
    // today = tolower(today);
    if(today==sun|| today==sat)
    {
        printf("\nPencho, party...yayyy");
    }
    else
    {
        printf("\nFir wahi mansik tanav...");
    }
    return 0;
 }