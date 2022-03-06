# include<stdio.h> 

int main(){
    int n,table;
    int sum=0;
    printf("Enter the Number:\n");
    scanf("%d",&n);
    printf("Table\n");
    for(int i=1;i<=10;i++){
    table=n*i;
        printf("%d*%d=%d\n",n,i,table);
        sum=sum+table;
    }
    printf("Sum=%d\n",sum);
    return 0;
}