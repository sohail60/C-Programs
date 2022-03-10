# include<stdio.h> 

void passbyvalue(int n);

int main(){
    int a=5;
    printf("Value of a before calling:%d\n",a);
    passbyvalue(a);
    printf("Value of a after calling:%d\n",a);
    return 0;
}

void passbyvalue(int n){
    n=n*10;
}