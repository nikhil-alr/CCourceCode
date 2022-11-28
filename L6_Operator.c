void assignmentOperator()
{
    int a,b,c;
    printf("enter Value of A:");
    scanf("%d",&a);
    printf("enter Value of B:");
    scanf("%d",&b);
    //a = 3
    //b = 4
    c = a;
    //c = 3
    a = b;
    //a = 4
    b = c;
    //b = 3

    printf("new Value of A:%d\n",a);
    printf("new Value of B:%d\n",b);
    a+=3;
    printf("new Value of A+3:%d\n",a);

}

void arithmeticOperator()
{
int a=10;
int b = 5;

int c = a+b; //5
//printf("%d",c);

//a+b-c*d/e
//BODMAS
int bodmas = (((10+5)-3)*6/2);
printf("%d",bodmas);


}

void relationalOperator()
{
//>,<,>=,<=,==,!=
//true|false=boolean
// 1  |  0  = int
int a =10;
int b = 10;
int c = a==b; //true = 1
printf("%d",c);
}

void logicalOperator()
{
//&&,||,!
int a =40;
int b = 10;

int z = 10;
int x = 20;

int con = (a==b)||(z==x);
printf("%d",con);

}

void bitwiseOperator()
{
//&,|,^,>>,<<

int a = 1;
int b = 2;
//c = a&b;

//8421
//0001
//0010
//0011

//0010<<1
//0100

//printf("%d",a|b);
printf("%d",b<<1);


}

void elvisOperator()
{
    //?
    int a = 10;
    int b = a==10?5:6;
    printf("%d",b);

}

void sizeOfOperator()
{
   int a = 10;
   char c = 'c';
   printf("%d",sizeof(c));
}

void starAndMemoryOperator()
{
    //*,&
   //6421996
    int a = 10;
    int *b = &a;
    printf("%d\n",&a);
    printf("%d",b);
    printf("%d",*b);
}

void swapProgram()
{
int a = 10; //Acctual
int b = 11;
swapByRef(&a,&b);
printf("a:%d\n",a);
printf("b:%d\n",b);
}


void swapByValue(int a,int b)
{
int tmp = a;
a = b;
b=tmp;
printf("a:%d\n",a);
printf("b:%d",b);
}

void swapByRef(int *a,int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b=tmp;
}





void dotAndArrowOperator()
{
//. ->
struct
{
int age;
int id;
}emp;

emp.age = 21;
emp.id = 1;
printf("Age%d\n",emp.age);
printf("Id%d",emp.id);

}


void tempConverter()
{
float tempInFahrenheit;
printf("Enter temp in Fahrenheit\n");
scanf("%f",&tempInFahrenheit);
float tempInCelcius = (tempInFahrenheit-32)/1.8;
printf("Temp in Celsius%f",tempInCelcius);
}


