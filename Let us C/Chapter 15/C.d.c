#include<stdio.h>
#include<string.h>
#include<math.h>
#include <stdlib.h>
#ifdef NOT_WORKING
char *input_dynamic_string()
{
    char *p,*q,ch;
    int i,length=1;

    p=(char*)malloc(length);
    scanf("%c",&ch);
    *p=ch;

    do
    {
        q=(char*) malloc(length+1);
        for(i=0;i<length;i++)
            *(q+i)=*(p+i);  //All the data in array p is copied in array q.
        *(q+i)='\0';        /*A '\0' character is added at the end of the array q as it has an extra block to store
                                        a character because its length is length+1 */
        length++;           /*value of length is incrimented by 1 to creat an array to stor e all the characters of 
                                q because the length of q is length+1 */              

        free(p);            // For clearing memory space the array p is deleted.
        printf("In do while\n");

        p=(char*) malloc(length);
        for(i=0;i<length;i++)
            *(p+i)=*(q+i);   // All the data in array q is copied in array p. 
        
        free(q);            // For clearing memory space the array q is deleted.            

        scanf("%c",&ch);
        *(p+length-1)=ch;          // Over wright on '\0'

    }while(ch != 13);       // This loop will continue untill we hit enter whose ASCII value is 13.

    printf("before last array formation\n");
    q=(char*)malloc(length);
    for(i=0;i<length;i++)
        *(q+i)=*(p+i);
    *(q+i-1)='\0';
    printf("arter last array formation\n");
    return (q);
}

#endif
int main()
{
    char string[11]; int length,i, intiger=0;
    printf("Enter the string: ");
    #ifdef NOT_WORKING
    string=input_dynamic_string();
    #endif
    gets(string);
    length=strlen(string);
    for(i=0;i<length;i++)
    {
        int n = *(string+i);
        int num =0;
        for(int j=48;j<n;j++)
            num++;
        num=num*pow(10,length-i-1);
        intiger = intiger + num;
    }

    printf(" the intiger version is %d",intiger);
    return 0;
}