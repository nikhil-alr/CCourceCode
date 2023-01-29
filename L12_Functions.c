void functionDemo()
{
 printf("Hello");
 printf("Hello world");
}

void functionWithArgument(int a,int b,int c, char ch)
{
printf("%d",a);
printf("%c",ch);
}

int functionWithReturn(int a)
{
return a*2;
}

void functionCallByRefrence()
{
int a = 10;
int b = 20;
printf("A Value%d\n",a);
printf("B Value%d\n",b);
//*,&
//a = 100 - 10
//b = 104 - 20
//swapValue(&a,&b);
callByRef(&a,&b);
//a = 100 - 20
//b = 104 - 10
printf("A Value%d\n",a);
printf("B Value%d",b);
}

void callByVal(int a,int b)
{
int c;
c = a;
a = b;
b = c;
}
void callByRef(int *a,int *b)
{
// a - 100 - 10
// b - 104 - 20
int c;
c = *a; // c =10
*a = *b; // a-100 = 20
*b = c;  // b-104 = 10
}

void functionWithArray()
{
int array[4] = {1,2,3,4};
printArray(array);
}

// int array[]
void printArray(int *array)
{
printf("%d",*array);
array+=1;
printf("%d",*array);
}

void recursionDemo(int i) //i=1,2,3,4,5
{
printf("%d\n",i);
if(i == 5)
    return;
recursionDemo(i+1);
}

void recursionApp(int result,int number)
{
//1 = 1
//2 = 2
//3 = 3*2 = 6
//4 = 4*3*2*1 = 24
//5 = 120
if(number==1)
{
printf("%d",result);
return;
}
//1->5;
//5->4
//20->3
//60->2
//120->1

   recursionApp(number*result,number-1);
}




