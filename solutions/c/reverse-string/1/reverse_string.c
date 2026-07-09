#include "reverse_string.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


char *reverse(const char *value)
{   
  char *reverse_string;
  size_t length = strlen(value);
  reverse_string = (char *) malloc(length * sizeof (char));  
  strcpy(reverse_string, value);
 
  for (size_t i = 0; i < length; i++)
  {
    printf("%c \n", value[i]);
     reverse_string[(length -1) - i] = value[i];
      printf("%c \n", reverse_string[length - i]);
  }
    
  return reverse_string;  
}