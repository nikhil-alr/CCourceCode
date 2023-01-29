#include <stdlib.h>
#include <stdio.h>
void readAndWriteCharDemo()
{
char ch = getchar();
putchar(ch);
//scanf("%c",ch);
//printf("%c",ch);
char ch2 = getch();
char ch3 = getche();
}

void readAndWriteStringDemo()
{

//char string[10];
//scanf("%s",&string);
//printf("%s",string);
char string2[10];
gets(string2);
puts(string2);
}

void recordCreation()
{
char moreRecord = 'y';
printf("Welcome to create record utility\n");
while(moreRecord=='y')
{
fflush(stdin);
printf("\n---------------------------------\n");
printf("Enter Name:");
char name[10];
gets(name);
printf("Enter Age:");
int age;
scanf("%d",&age);
printf("----------Record--------------------\n");
printf("Name:");
puts(name);
printf("Age:%d",age);
printf("\n----------Record--------------------\n");
printf("Enter more record : y/n");
moreRecord = getch();
}
}


void demoPrintfFormatter()
{
//%o,%x,%0
int a = 10;
printf("Oct:%o\n",a);
printf("Hex:%x\n",a);
printf("%4x",a);
}

void demoScanfFormatter()
{
//%o,%x
int p;
scanf("%o",&p);
printf("%d",p);

scanf("%x",&p);
printf("%d",p);

}
