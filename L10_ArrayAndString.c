void singleDimension()
{
int array[10] = {0,1,2}; //0-9
float arrayf[10];
char arrayc[10];

//0-9   //10
printf("%d\n",array[0]);
array[0] = 10;
printf("%d\n",&array[0]);
printf("%d",&array[1]);

}

void strings()
{
char tmpString[] = "Hello world";
char tmpStringOne[10];
char tmpStringThree[10]= {'a','b','c'};
printf("Welcome %s\n",tmpStringThree);

strcpy(tmpStringOne,tmpStringThree);
puts(tmpStringOne);

printf("%d\n",strlen(tmpString));

strcat(tmpString,tmpStringThree);
puts(tmpString);


}


void multidimensionalArray()
{
int array[3];
int arrayTwoDim[3][3];
int arrayThreeDim[3][3][3];
char strings[3][5];

//array
array[0] = 1;
array[1] = 2;

arrayTwoDim[0][0] = 1;
arrayTwoDim[0][1] = 2;
arrayTwoDim[1][1] = 3;

strings[0][0] = 'a';
strings[0][1] = 's';
arrayThreeDim[0][0][0] = 10;

printf("%c",strings[0][1]);


for(int row=0;row<3;row++)
{
for(int col=0;col<3;col++)
{
arrayTwoDim[row][col] = 1;
}
}

for(int row=0;row<3;row++)
{
for(int col=0;col<3;col++)
{
printf("%d",arrayTwoDim[row][col]);
}
}
}





