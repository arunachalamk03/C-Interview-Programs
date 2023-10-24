#include<string.h>
#include<stdio.h>
int main(){
     char *str,*rev;
     int i,j;
     printf("\nEnter a string:");
     scanf("%s",str);
     for(i=strlen(str)-1,j=0;i>=0;i--,j++)
        rev[j]=str[i];
     rev[j]='\0';
     if(strcmp(rev,str))
        printf("\nThe string is not a palindrome");
     else
        printf("\nThe string is a palindrome");
     return 0;
}
