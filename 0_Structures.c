# include <stdio.h> 
# include <string.h>


int main(){
    struct emp{
        int id;
        char name[10];
    };

    struct emp e1;
    e1.id=1;
    strcpy(e1.name,"sohail");

    struct emp e2;
    e2.id=2;
    strcpy(e2.name,"abc");

    struct emp e3;
    e3.id=3;
    strcpy(e3.name,"xyz");

    return 0;
}