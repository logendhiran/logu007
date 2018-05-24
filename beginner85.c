#include <stdio.h>
#include <string.h>

  int main() 
  {
        char string[200], even[200], odd[1200], i, j, k;
        
        i = j = k = 0;
        
        printf("Enter input string:");
        
        fgets(string, 100, stdin);
        
        string[strlen(string) - 1] = '\0';
        
        printf("Given Input string:%s\n", string);
        
        while (string[i] != '\0')
        
        {
                if (i % 2 == 0) 
                
                {
                        odd[j++] = string[i];
                }
                
                else 
                
                {
                        even[k++] = string[i];
                }
                
                i++;
        }     
        
        odd[j] = even[k] = '\0';

        printf(" odd position: %s\n", odd);
        
        printf("even position: %s\n", even);
        
        return 0;
        }
