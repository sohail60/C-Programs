# include<stdio.h> 

int main(){
    float r,h;
    printf("Enter the Radius and Height:\n");
    scanf("%f",&r);
    scanf("%f",&h);
    float volume=3.14*r*r*h;
    printf("Volume=%f",volume);
    return 0;
}