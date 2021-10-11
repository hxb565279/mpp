#include<stdio.h>
int main(){
    char * name[]={"ff","rrerec","ff","88","uu"};
    char **p;
    int i;
    for(int i=0;i<5;i++){
        p=name+i;
        printf("%d\n",**p);
    }
    return 0;
}