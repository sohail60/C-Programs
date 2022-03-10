# include<stdio.h> 
void swaparr(int arr[],int a,int b);
void revarr(int arr[]);
void swap(int a,int b);

int main(){
    int arr[]={2,3,6,7,8,45};
    int a=5,b=9;
    printf("\n");
    printf("Value of int variables before call by value: a=%d and b=%d\n" , a,b);
    printf("\n");
    swap(a,b);
    printf("Value of int variables after call by value: a=%d and b=%d\n" , a,b);
    printf("\n");
    printf("Value of Array before call by value:\n");
    for(int i=0;i<=5;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
    revarr(arr);
    printf("\nValue of Array after call by value:\n");
    for(int i=0;i<=5;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
    return 0;s
}

void swap(int a,int b){
int temp=a;
a=b;
b=temp;
}

void swaparr(int arr[],int a,int b){
int temp=arr[a];
arr[a]=arr[b];
arr[b]=temp;
}

void revarr(int arr[]){
    int start=0,end=5;
while(end>=start){
    swaparr(arr,start,end);
    start++;
    end--;
}
}