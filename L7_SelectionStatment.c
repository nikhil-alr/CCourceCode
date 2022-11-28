void ifElse()
{
int age = 0;
printf("Enter your age\n");
scanf("%d",&age);

if(age<18)
{
printf("You are not adult");
}
else
{
printf("You are  adult");
}
}

void nestedIfElse()
{
int percentage = 0;
printf("Enter you percentage\n");
scanf("%d",&percentage);
if(percentage>=70)
{
printf("You Passed with first div\n");
}
else
{
if(percentage>=50)
{
printf("You Passed with second div\n");
}
else
{
if(percentage>=33)
{
printf("You Passed with third div\n");
}
else
{
printf("You failed\n");
}

}
}

}

void ifElseLadder()
{

    int a;

    printf("Enter Value of a: ");
    scanf("%d",&a);
    if(a<0)
    {
        printf("Value of a is less then Zero");
    }
    else if(a==0)
    {
        printf("Value of a is ZERO");
    }
    else if(a==1)
    {
        printf("Value of a is ONE");
    }
    else if(a==2)
    {
        printf("Value of a is TWO");
    }
    else if(a==3)
    {
        printf("Value of a is THREE");
    }
    else if(a==4)
    {
        printf("Value of a is FOUR");
    }
    else if(a==5)
    {
printf("Value of a is FIVE");
    }
    else
    {
printf("Value of a is Greater then 5");
    }
}

void terneryCondition()
{
printf("Enter Your Age : ");
int age;
scanf("%d",&age);
(age >= 18) ? printf("You Can Vote") : printf("You Cannot Vote");
char ch = (age >= 18) ? 'T' : 'F';
printf("%c",ch);
}

void switchStatment()
{

 int turnOnLight;
 printf("Enter Room Number TO Turn ON Light : ");
 scanf("%d",&turnOnLight);
 switch(turnOnLight)
 {
 case 1:
     printf("Light On for ROOM One");
 case 2:
     printf("Light On for ROOM Two");
     break;
     case 5:
     printf("Light On for ROOM Five");
     break;
     default:
     printf("Light On for Other Building");

 }
}

void nestedSwitchStatement()
{
    printf("1.For Ac-1\n 2.For Ac-2\n 3.For Sleeping\n 4.For Not Sleeping\n");
    printf("Enter Option to book ticket\n");
    int ticketOption;
    int services;
    scanf("%d",&ticketOption);


    switch(ticketOption)
    {
case 1:
    printf("1.For Personal Cabin\n 2.For Share cabin\n");
    scanf("%d",&services);
    switch(services)
    {
        case 1:
        printf("Ac-1 with personal cabin book");
        break;
        case 2:
        printf("Ac-1 with share cabin book");
        break;
        default:
        printf("Wrong option selected");
    }
    break;
case 2:
    printf("1.For Share Cabin with 1\n 2.For Share cabin with 2\n");
    scanf("%d",&services);
    switch(services)
    {
        case 1:
        printf("Ac-2 with share cabin with 1 book");
        break;
        case 2:
        printf("Ac-2 with share cabin with 2 book");
        break;
        default:
        printf("Wrong option selected");
    }
    break;
case 3:
    printf("1.For Lower Berth\n 2.For Upper Berth\n");
    scanf("%d",&services);
    switch(services)
    {
        case 1:
        printf("Sleeping with lower berth book");
        break;
        case 2:
        printf("Sleeping with upper berth book");
        break;
        default:
        printf("Wrong option selected");
    }

    break;
case 4:
    printf("Thanks for booking");
    break;
default:
    printf("Wrong option selected");
    }
}
