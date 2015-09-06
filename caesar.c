#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

char caesarUpFx(char c, int k);
char caesarLowFx(char c, int k);

int main(int argc, string argv[])
{

  //  printf("%s\n", argv[1]);
  //  printf("%i\n", k);
  
    if(argc != 2)
    {
        printf("Invalid input\n");
        return 1;
    }
    else
    {
        int n = atoi(argv[1]);
    
        if(n < 0)
        {   
            printf("Invalid input\n");        
            return 1;
        }
        else
        {
            
            int k = n%26;
        //  printf("Secret key: ");
            string key = GetString();
            int len = strlen(key);
            
      //      printf("%c\n", key[0]);
           
           for(int i = 0; i < len; i++)
           {
                if((int)key[i] >= 65 && (int)key[i] <= 90)
                {
                    printf("%c", caesarUpFx(key[i], k));
                }
                else if((int)key[i] >= 97 && (int)key[i] <= 122)
                {
                    printf("%c", caesarLowFx(key[i], k));
                }
                else
                {
                    printf("%c", key[i]);
                }
           }
                printf("\n");
                return 0;
            
        }    
    }
}

char caesarUpFx(char c, int k)
{
    char a;
    
    if(c + k > 90)
    {
        a = c + k - 90 + 65 - 1;
    }
    else
    {
        a = c + k;
    }
    
    return a;
}

char caesarLowFx(char c, int k)
{
    char a;
    
    if(c + k > 122)
    {
        a = c + k - 122 + 97 - 1;
    }
    else
    {
        a = c + k;
    }
    
    return a;
}
