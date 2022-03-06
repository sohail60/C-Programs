# include<stdio.h> 

int main(){
    float income;
    printf("Enter The Annual Income in Lakhs \n");
    scanf("%f",&income);
    float tax;
    if(income<=2.5)
    tax=0;
    if(income>2.5 && income <=5)
    tax=.05*(income-2.5);
    if(income>5 && income <=10)
    tax=(0.05*2.5)+0.2*(income-5);
    if(income>10)
    tax=(0.05*2.5)+(0.2*5)+0.3*(income-10);

    printf("Tax in Lakhs=%f",tax);

    return 0;
} 