#include<stdio.h>
int main(){
    //Variables are the names given to the container for memory and the address of the memory.For different types of data takes different size of memory 

    // sizeof() gives the size of all the data types
    int a;  //Integeer
    printf("The size of the int is %d\n",sizeof(a));
    float b;  //decimal point
    printf("The size of the float is %d\n",sizeof(b));
    double c; //decimal point precision to morethan one digit more than the decimal point
    printf("The size of the double is %d\n",sizeof(c));
    long int d; //long integer 
    printf("The size of the long int is %d\n",sizeof(d));
    short int e; //short  int is used to shorten the size of int
    printf("The size of the short int is %d\n",sizeof(e));
    char f;
    printf("The size of the char is %d\n",sizeof(f));
    
    return 0;
}