# include<stdio.h> 

float avg(float a,float b, float c);
int main(){
    float a,b,c;
    printf("Enter the three Numbers:\n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    float answer=avg(a,b,c);
    printf("Average=%f",answer);
    return 0;
}

float avg(float a,float b,float c){
    float avg=(a+b+c)/3;
    return avg;
}