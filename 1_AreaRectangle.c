# include<stdio.h> 

int main(){
    float l,b;
    printf("Enter the Length and Breadth \n");
    scanf("%f",&l);
    scanf("%f",&b);

    double area=l*b;
    printf("Area=%f",area);
    return 0;
}