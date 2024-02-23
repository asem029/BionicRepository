#include <stdio.h>
#include <ctype.h>

int main () 
{
   char cha=0;
   printf("enter a charecter\n");
   scanf(" %c",&cha) ;
   if( !isalpha(cha) ) 
   {
      printf("invalid");
      return 1;
   }
    int vowel_lower =(cha == 'a' || cha == 'e' || cha == 'i' || cha == 'o' || cha == 'u');
    int vowel_Upper =(cha == 'A' || cha == 'E' || cha == 'I' || cha == 'O' || cha == 'U');

   switch (vowel_lower||vowel_Upper)
      {
        case 0:
            printf("character is consonant\n");
            break; 
   
        default:
            printf("character is vowel\n");
            break;
   }

   return 0;
}