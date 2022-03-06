# include<stdio.h> 

void sumavg(float a, float b, float *sum, float *avg);
int main(){
    float a,b,sum=0,avg=0;
    printf("Enter two Numbers:\n");
    scanf("%f",&a);
    scanf("%f",&b);
    sumavg(a,b,&sum,&avg);
    printf("Sum:%f\n",sum);
    printf("Average:%f\n",avg);
    return 0;
}


void sumavg(float a, float b, float *sum, float *avg){
        *sum=a+b;
        *avg=*sum/2;
}