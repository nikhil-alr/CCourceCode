#include<stdio.h>
void introToDataType() {
    int intType = 10;
    float floatType = 2.5;
    double doubleType = 2.444445;
    char charType = 'A';
    long int longType = 333333333;
    long long int longlongType = 1111111111111;


    printf("Size of int: %d bytes\n", sizeof(intType));
    printf("Value of int: %d \n", intType);
    printf("Size of float: %d bytes\n", sizeof(floatType));
    printf("Value of float: %f \n", floatType);
    printf("Size of double: %d bytes\n", sizeof(doubleType));
    printf("Value of double: %f \n", doubleType);
    printf("Size of char: %d byte\n", sizeof(charType));
    printf("Value of char: %c \n", charType);
    printf("Size of long: %d byte\n", sizeof(longType));
    printf("Value of long: %ld \n", longType);
    printf("Size of long long: %d byte\n", sizeof(longlongType));
    printf("Value of long: %lld \n", longlongType);
}

void typeCast()
{

int a = 97;
char c = a;
printf("%c",a);

char aa = 'C';
printf("%f",(float)aa);

}

void encode(int msg)
{
printf("Plain Message:%d\n",msg);
printf("Encoded Message:%c\n",msg);
}

void decode(char msg)
{
printf("Plain Message:%c\n",msg);
printf("Decode Message:%d\n",msg);

}






