#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void openAndCloseFile()
{
FILE *fp;
fp = fopen("test.txt","r");
if(fp==NULL)
{
printf("Unable to open file");
}
char ch = getc(fp);
char ch2 = getc(fp);
char ch3 = getc(fp);
printf("%c",ch);
printf("%c",ch2);
printf("%c",ch3);
fclose(fp);
}


void readFileStream()
{
FILE *fp;
fp = fopen("test.txt","r");
if(fp==NULL)
{
printf("Unable to open file");
return;
}

while(!feof(fp))
{
char ch = getc(fp);
printf("%c",ch);
}
fclose(fp);
}


void writeData()
{
FILE *fp;
fp = fopen("test.txt","a+");
if(fp==NULL)
{
printf("Unable to open file");
return;
}
putc('s',fp);
fputs("Hello World",fp);
fclose(fp);
}


void skipContent()
{
FILE *fp;
fp = fopen("test.txt","r");
if(fp==NULL)
{
printf("Unable to open file");
return;
}
char ch = getc(fp);
printf("%c",ch);
fseek(fp,7,SEEK_SET);
ch = getc(fp);
printf("%c",ch);
fclose(fp);
}

void removeContent()
{
remove("test.txt");
}

void rewindContent()
{
FILE *fp;
fp = fopen("test.txt","r");
fseek(fp, 7, SEEK_SET);
char ch = getc(fp);
printf("%c",ch);
rewind(fp);
ch = getc(fp);
printf("%c",ch);
}



