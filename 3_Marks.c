# include<stdio.h> 

int main(){
    int marks1,marks2,marks3;
    printf("Enter the 3 subject marks \n");
    scanf("%d",&marks1);
    scanf("%d",&marks2);
    scanf("%d",&marks3);

    int sum=marks1+marks2+marks3;

    if(marks1>=33 && marks2>=33 && marks3>=33 && sum>=0.4*300)
    printf("Pass \n");
    else
    printf("Fail \n");

    return 0;
}