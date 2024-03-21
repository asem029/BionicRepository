#include <stdio.h>
#include <string.h>

void reverse(char arr[],int start,int end);

int main()
{
    //getting string 
    char string [75];
    printf("enter string\n");
    fgets(string,sizeof(string),stdin);

    //striping 
    int i=0;
    char actual_length=1;
    while(string[i])
    {
        if (string[i]=='\n')
            {
                string[i]='\0';
            }
        i++;
    }
    //checking
    int size=strlen(string); 
    int start=0;
    int end =size-1;
    int flag=0;
    while (start < end) {
        if (string[start]!=string[end])
        {
            flag=1;
            break;
        }
        start++;
        end--;
    }    
    if (flag==1)
    {
        printf("string is not palindrome");
    }
    else
    {
        printf("string is palindrome");
    }

}