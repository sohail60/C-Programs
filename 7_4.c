# include<stdio.h> 

int main(){
    int arr[10];
    int n=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    printf("Multiplication Table of %d\n",n);
    for(int i=1;i<=10;i++){
        printf("%d\n",i*n);
    }
    return 0;
}