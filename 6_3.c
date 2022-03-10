# include<stdio.h> 

void passbyreference(int *n);

int main(){
    int a=5;
    int *ptr=&a;
    printf("Value of a before calling:%d\n",a);
    passbyreference(ptr);
    printf("Value of a after calling:%d\n",a);
    return 0;
}

void passbyreference(int *n){
    *n=*n*10;
}