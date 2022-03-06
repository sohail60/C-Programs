# include<stdio.h> 

int main(){
    float p,r,t;
    printf("Enter Principal\n");
    scanf("%f",&p);
    printf("Enter Rate\n");
    scanf("%f",&r);
    printf("Enter Time in Years\n");
    scanf("%f",&t);

    float interest=p*r*t/100;
    printf("Simple Interest=%f",interest); 
    return 0;
}