# include<stdio.h> 

void pass(int a);

int main(){
    int i=10;
    printf("Address is:%u\n",&i);
    pass(i);
    return 0;
}

void pass(int a){
    printf("Address is:%u\n",&a);
}