# include<stdio.h> 

int main(){
    int n,table;
    printf("Enter the Number:\n");
    scanf("%d",&n);
    printf("Table\n");
    for(int i=10;i>=1;i--){
    table=n*i;
        printf("%d*%d=%d\n",n,i,table);
    }
    return 0;
}