#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    
    system("cls");
    __int8 myAge = 25;
    __int8* ptr = &myAge;
    
    printf("myAge   %d\n",myAge);
    printf("&myAge  %p\n",&myAge);
    printf("ptr     %p\n",ptr);
    printf("*ptr    %d\n",*ptr);

    *ptr = 35;
    printf("myAge   %d\n",myAge);

    int myNumbers[4] = {25,50,75,100};
    __int8 myNumbers_01[4] = {25,50,75,100};

    char name[] = "Hello world";

    int i;
    for ( i = 0; i <strlen(name) ; i++)
    {
        printf("%c",name[i]);
    }

    for (int j = 0; j < 4; j++)
    {
        printf("\n%d\n",myNumbers_01[j]);
        printf("\n%d\n",&myNumbers_01[j]);
    }
    

    return 0;
}