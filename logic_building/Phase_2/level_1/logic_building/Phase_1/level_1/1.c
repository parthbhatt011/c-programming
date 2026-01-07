//Take a number and print whether it’s positive, negative, or zero. 

#include<stdio.h>

int main(){
        double x;
        printf("enter a number: ");
        scanf("%lf", &x);

        if(x<0){
            printf("the number is negative");
        }
        else if(x==0){
            printf("the  number is zero");
        }
        else{
            printf("the number is positive");
        }

    return  0;
}