# include<stdio.h> 
#include <conio.h>  
#include <stdlib.h> 
#include <time.h>

int main(){
    printf("Enter the Number:\n");
    int n;
    srand(time(0));
    int target = rand()%100 + 1;
    while(1){
        scanf("%d",&n);

        if(n>target){
            printf("The Target is Smaller\n");
        }
        else if(n<target){
            printf("The Target is Greater\n");
        }
        else if(n==target){
            printf("Target guessed correctly\n");
            break;
        }
    }
    return 0;
}