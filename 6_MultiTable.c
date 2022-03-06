# include<stdio.h> 

int main(){
    int a[10];int n;
    printf("Enter the Number:\n");
    scanf("%d",&n);
    printf("Multiplication Table of %d\n",n);
    for(int i=0;i<10;i++){
        a[i]=n*(i+1);
        printf("%d ",a[i]);
    }
    return 0;
}