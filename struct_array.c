#include <stdio.h>
struct Student
{
    char name[20];
    float cgpa;
};
int main()
{
    struct Student student1 = {"Oggy", 7.52};
    struct Student student2 = {"Jack", 5.35};
    struct Student student3 = {"Olivia", 8.90};
    struct Student student4 = {"Bob", 9.41};
    
    struct Student students[] = {student1, student2, student3, student4};
    for(int i=0; i<sizeof(students)/sizeof(students[0]); i++)
    {
        printf("%-10s\t", students[i].name);
        printf("%.2f\n", students[i].cgpa);
    }
    return 0;
}