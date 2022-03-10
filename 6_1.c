# include<stdio.h> 

int main(){
    int a=10;
    printf("Address is:%u\n",&a);
    printf("Value is:%d\n",*&a);
    return 0;
}