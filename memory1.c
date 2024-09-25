#include<stdio.h>
#include<stdlib.h>

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

    return 0;
}