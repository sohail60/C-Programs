# include<stdio.h> 

int main(){
    int n;int i;
    printf("Enter the Number:\n);
    scanf("%d",&n);

    if(n<=1)
    printf("Neither Prime nor Composite");
    else{
    for(i=2;i*i<n;i++){
        if(n%i==0){
        printf("Not Prime");
        break;
        }
        }
    if(i>n)
    printf("Prime");
    }
    return 0;
    }