#include<stdio.h>
#include<string.h>
void main()
{
    char sent[80];  int i,k;
    printf("Enter the sentence: \n");
    gets(sent);
    i=0;
    while(sent[i] != '\0')
    {
        k=0;
        if(sent[i]=='a'||sent[i]=='e'||sent[i]=='i'||sent[i]=='o'||sent[i]=='u'
        ||sent[i]=='A'||sent[i]=='E'||sent[i]=='I'||sent[i]=='O'||sent[i]=='U')
        {
            //printf("vowel detected at position %d\n",i);
            k=i;
            while(sent[k] != '\0')
            {
                sent[k]=sent[k+1];
                k++;
                //printf("inside 2nd while loop of replecement\n");
            }
        }
        else
            i++;
    }
    puts(sent);
}