#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM_1 "1234"
#define NUM_2 "5678"

int main()
{
    char str[20];
    int x;
    sscanf(NUM_1, "%d", &x);  //store NUM_1
    
    int y;
    sscanf(NUM_2, "%d", &y);   //store NUM_2
    

    int add = x + y;
    
    sprintf(str, "%d", add);  //int to str
    printf("\n\"%s\"",str);
  
    
    
    
    return 0;
}
