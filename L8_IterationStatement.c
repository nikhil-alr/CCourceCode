void forLoop()
{
int i = 0;
for(i=0;i<10;i++)
{
printf("Printing Value\n");
}

for(int i=0,j=10;i<10;i++,j--)
{
printf("VALUE of i%d\n",i);
printf("VALUE of j%d\n",j);
}

for( ; ; )
{
printf("INFINTE VALUE");
}


}

void whileLoop()
{
int i=0;
while(i<100)
{
printf("Printing Value\n");
}
}

void doWhileLoop()
{
int i=0;
do
{
printf("Printing Value\n");
i++;
}
while(i<100);
}
