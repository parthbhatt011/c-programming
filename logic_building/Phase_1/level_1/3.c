//Check if a number is divisible by 5

#include<stdio.h>

int main(){
    int x;
    printf("enter the number to check :");
    scanf("%d",&x);

    if(x%5==0){
        printf("the number is divisible by 5");
    }

    else{
       printf( "number is not divisible by 5");
    }
    
    

    return 0;
}