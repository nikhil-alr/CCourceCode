#define MESSAGE "HELLO WORLD ABC"
#define ARRAYLEN 10

void preprocessorsDemo()
{
int myArray[ARRAYLEN];
printf(MESSAGE);
#if ARRAYLEN<30
int size = 10;
printf("\n Array Size is less then 30");
#else
printf("\n Array Size of greater or equal 30");
#endif
printf("\nSize of array%d",size);
#ifdef Addtion
printf("Addition is defiend already");
#endif // Addtion
}

