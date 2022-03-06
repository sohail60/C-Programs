# include<stdio.h> 

int positive(int a[]);

int main(){
    int a[5];
    printf("Enter the Numbers:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    int counter=positive(a);
    printf("Number of positive numbers:%d\n",counter);

    return 0;
}   

int positive(int a[]){
    int c=0;
    for(int i=0;i<5;i++){
    if(a[i]>0){
        c++;
    }
    }
    return c;
}