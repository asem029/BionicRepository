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

    int size = strlen(string);
    int start=0;
    //reverse all string 
    reverse(string,0,size-1);
    //reverse each word
    for (int i=0;i<size;i++)
    {
        if (string[i]==' ')
        {
            reverse(string,start,i-1);
            start=i+1;
        }
    }
    //reverse last word
    reverse(string,start,size-1);
    printf("%s",string);

}


void reverse(char arr[],int start,int end)
{
    int temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}