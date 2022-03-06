# include<stdio.h> 

int main(){
    int a,b,c,d;
    int max=0;
    printf("Enter the Numbers: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);

    max=a;
    //  Ternary Operator
    // (b>max)?max=b:max=a;         //not working....why??
    // (c>max)?max=c:max=b;
    // (d>max)?max=d:max=c;

    if(b>max)
    max=b;
    if(c>max)
    max=c;
    if(d>max)
    max=d;

    printf("Max=%d",max);

    return 0;
}