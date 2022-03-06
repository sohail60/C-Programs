# include<stdio.h> 

float force(float m);

int main(){
    float m;
    printf("Enter the mass:\n");
    scanf("%f",&m);
    float answer=force(m);
    printf("Force of Gravity=%f \n",answer);
    return 0;
}

float force(float m){
    float f=m*9.8;
    return f;
}