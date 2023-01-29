void pointerDemo()
{
    int a = 1;
    int b = 2;
    int *ptr = &a;
    printf("%d\n",ptr);
    ptr = &b;
    printf("%d\n",ptr);
    printf("%d\n",*ptr);

    //+,-,<,>

    printf("%d\n",*ptr);
    ptr+=1;
    printf("%d",*ptr);
    ptr-=1;
    printf("%d\n",*ptr);
    printf("%d\n",ptr>(&a));

}

void pointerArray()
{
char *p;
char str[] = "Hello world";
p = str;
while(*p)
{
printf("%c",*p);
p+=1;
}

int a,b,c,d;
int *ptrArray[10];
ptrArray[0] = &a;
ptrArray[1] = &b;
ptrArray[2] = &c;
ptrArray[3] = &d;

printf("%d\n",ptrArray[0]);
printf("%d\n",ptrArray[1]);
printf("%d\n",ptrArray[2]);
}

void add(int a,int b)
{
printf("%d",a+b);
}

void subtract(int a,int b)
{
printf("%d",a-b);
}

void performOperation(void (*functionPointer) (const int,const int))
{
functionPointer(10,30);
}

void pointerToFunction()
{
void (*functionPointer) (const int,const int);
functionPointer = add;
performOperation(functionPointer);
}


void dyanamicAllocatedArray()
{
    int n = 5;
    int *ptr = (int*)malloc(n * sizeof(int));
    int *ptr2 = (int*)calloc(n,sizeof(int));

        // Memory has been successfully allocated
        printf("Memory successfully allocated using malloc.\n");

        // Get the elements of the array
        int i=0;
        for (i = 0; i < n; ++i) {
            ptr[i] = i + 1;
        }


        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);

    }

    //ptr2 = (int*)realloc(ptr,n*sizeof(int));

        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr2[i]);

    }

   free(ptr);
}

