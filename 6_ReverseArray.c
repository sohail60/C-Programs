# include<stdio.h> 

void rev(int *a[]);
void swap(int start,int end);

int main(){
    int a[5]={54,58,12,36,45};
    // printf("Enter the Numbers:\n");
    // for(int i=0;i<5;i++){
    //     scanf("%d",&a[i]);
    // }
    rev(&a);
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
}

void rev(int *a[]){
    int start=0,end=4;
    while(end>start){
    swap(&a,start,end);
    start++;
    end--;
    }
    // for(int i=0;i<5;i++){
    //     printf("%d ",a[i]);
    // }
}

void swap(int start,int end){
    int temp=0;
    temp=start;
    start=end;
    end=temp;
}