# include<stdio.h> 

int main(){
    int n,fact=1,i=1;
    printf("Enter the Number:\n");
    scanf("%d",&n);

    do{
        fact=fact*i;
        i++;
    }while(i<=n);
    printf("Factorial=%d",fact);
    return 0;
}