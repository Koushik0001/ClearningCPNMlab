#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[50];
    int marks, i, num;

    printf("Enter number of students: ");
    scanf("%d",&num);
    FILE *fptr;
    fptr = (fopen("C:\\Users\\Dell\\Desktop\\Codding\\C Learning\\CPNM Class ( 2nd sem )\\CPNM Theory\\StructAssignment\\student.txt","w"));
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    for(i = 0; i<num; ++i)
    {
        printf("For student%d\nEnter name: ", i+1);
        fflush(stdin);
        scanf("%s",&name);
        printf("Enter marks: ");
        fflush(stdin);
        scanf("%d",&marks);
        fprintf(fptr,"\nName: %s \nMarks=%d \n", name, marks);
    }
    fclose(fptr);
    return 0;
}