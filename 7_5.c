# include<stdio.h> 
void swaparr(int *arr[],int a,int b);
void revarr(int *arr[],int n);

int main(){
    int arr[]={2,3,6,7,8,45};
    printf("Value of Array before call by value:\n");
    for(int i=0;i<=5;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
    revarr(&arr,5);  // passing 5 as last index of the array
    printf("\nValue of Array after call by value:\n");
    for(int i=0;i<=5;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
    return 0;
}

void swaparr(int *arr[],int a,int b){
int *temp;
temp=arr[a];
arr[a]=arr[b];
arr[b]=temp;
}

void revarr(int *arr[],int n){
    int start=0,end=n;
while(end>=start){
    swaparr(arr,start,end);
    start++;
    end--;
}
}