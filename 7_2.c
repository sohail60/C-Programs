# include<stdio.h> 

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    // int *ptr=&arr[0];
    // int *ptr2=&arr[2];

    // printf("1st Element Address: %u\n",ptr);
    // printf("3st Element Address: %u\n",ptr2);
    // printf("ptr+2 value: %u\n",ptr+2);

    printf("%d",*(arr+3));

    return 0;
}