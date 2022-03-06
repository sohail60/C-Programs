# include<stdio.h> 

int main(){
    char ch;
    printf("Enter the Alphabet: \n");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    printf("UpperCase");
    else if(ch>='a' && ch<='z')
    printf("LowerCase");
    else
    printf("Invalid Input");
    
    return 0;
}