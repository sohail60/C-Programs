# include<stdio.h> 

float temp(float c);

int main(){
    float c;
    printf("Enter the Celsius Temperature:\n");
    scanf("%f",&c);
    float answer=temp(c);
    printf("Temp in Fahrenheit=%f \n",answer);
    return 0;
}

float temp(float c){
    float f=1.8*c+32;
    return f;
}