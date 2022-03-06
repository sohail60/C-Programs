# include<stdio.h> 

int main(){
    int a[10];
    printf("Multiplication Table of 5\n");
    for(int i=0;i<10;i++){
        a[i]=5*(i+1);
        printf("%d ",a[i]);
    }
    return 0;
}