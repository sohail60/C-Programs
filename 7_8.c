# include<stdio.h> 
void multi(int *ptr,int n,int end);

int main(){
    int arr[3][10];
    int n1,n2,n3;
    printf("Enter the Numbers:\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    printf("\n");
    multi(&arr[0],n1,10);  //multi(&arr[0][0],2,10); if we write like this, we dont get any disclaimer
    multi(&arr[1],n2,10);  //multi(&arr[1][0],7,10);
    multi(&arr[2],n3,10);  //multi(&arr[2][0],9,10);

    for (int i = 0; i <=2 ; i++){
        for (int j = 0; j <=9 ; j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n\n");
    }
    return 0;
}

void multi(int *ptr,int n,int end){
    for (int i = 1; i <=end ; i++){
        (*ptr)=n*i;
        ptr++;
    }
}