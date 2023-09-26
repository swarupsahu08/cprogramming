#include<stdio.h>
int main(){
    //Variables are the names given to the container for memory and the address of the memory.For different types of data takes different size of memory 

    // sizeof() gives the size of all the data types
    int a;
    printf("The size of the int is %d\n",sizeof(a));
    float b;
    printf("The size of the float is %d\n",sizeof(b));
    double c;
    printf("The size of the double is %d\n",sizeof(c));
    long int d;
    printf("The size of the long int is %d\n",sizeof(d));
    short int e;
    printf("The size of the short int is %d\n",sizeof(e));
    char f;
    printf("The size of the char is %d\n",sizeof(f));
    
    return 0;
}