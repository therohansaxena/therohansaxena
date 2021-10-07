/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
*/

#include <stdio.h>

int main()
{
    int a,b,s,t;
    
    scanf("%d%d", &a,&b);
    s=a/b;
    t=a%b;
    printf("The value of quotient %d and remainder %d" ,s,t);

    return 0;
}
