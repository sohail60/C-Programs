# include<stdio.h> 

int main(){
    int a=10;
    int *i=&a;
    int *j=&i;
    int *value=*j;
    printf("%d\n",value);
    printf("Value of a:%d\n",*value);
    return 0;
}