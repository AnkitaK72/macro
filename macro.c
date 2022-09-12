#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM_1 "1234"
#define NUM_2 "5678"

int main()
{
    char str[20];
    int x;
    sscanf(NUM_1, "%d", &x);
    //printf("\nThe integer value of x is %d ", x);
    int y;
    sscanf(NUM_2, "%d", &y);
    //printf("\nThe integer value of y is %d ", y);

    int add = x + y;
    //printf("\nadd is %d",add);
    sprintf(str, "%d", add);
    printf("\n\"%s\"",str);
    //printf("str is : " "%s",str);
    
    
    
    return 0;
}