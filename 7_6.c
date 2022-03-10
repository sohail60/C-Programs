# include<stdio.h>
int count(int *ptr,int end);

int main(){
    int arr[]={2,-3,6,-7,-8,45};
    int answer=count(&arr[0], 5);    // passing 5 as last index of the array
    printf("Positive Numbers: %d",answer);
    return 0;
}

int count(int *ptr,int end){
    int c=0;
    for(int i=0;i<=end;i++){
        if((*ptr)>0){
            c++;
        }
        ptr++;
    }
    return c;
    }