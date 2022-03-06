# include<stdio.h> 

int main(){
    float c;
    printf("Enter the temp in Celsius:\n");
    scanf("%f",&c);

    float f=(c*1.8)+32;
    printf("Temp in Fahrenheit=%f",f);
    return 0;
}