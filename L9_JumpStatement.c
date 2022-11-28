int returnStatment()
{
int dish;
printf("1.For Dish ABC\n 2.For Dish XYZ \n 3.For Exit");
scanf("%d",&dish);
if(dish==3)
    return -1;
else
return dish;
}

int breakStatment()
{
int dishChoice;
for(;;)
{
printf("1.For Dish ABC\n 2.For Dish XYZ \n 3.For Bill");
scanf("%d",&dishChoice);
if(dishChoice == 3)
break;
}
}

void continueStatement()
{
for(int i=1;i<=10;i++)
{
if(i%2!=0)
    continue;

printf("%d is Even Number\n",i);
}
}

void gotoStatment()
{
comeHere:
    printf("Jump here from line 39\n");
goto comeHere;
}

