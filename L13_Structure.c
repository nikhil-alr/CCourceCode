void structureDemo()
{
struct
{
int id;
char name[10];
int age;
char gender;
}emp1,emp2;
//.
emp1.id = 10;
emp1.age = 20;
emp1.gender = 'm';
strncpy(emp1.name,"abc",10);

printf("Id:%d,\n",emp1.id);
printf("Age:%d,\n",emp1.age);
printf("Gender:%c,\n",emp1.gender);
puts(emp1.name);

}



void structureArray()
{

struct Emp
{
int id;
char name[10];
int age;
char gender;
};

struct Emp empArray[10];

empArray[0].id = 1;
empArray[0].age = 20;
empArray[0].gender = 'f';

empArray[1].id = 2;
empArray[1].age = 22;
empArray[1].gender = 'f';

empArray[2].id = 3;
empArray[2].age = 23;
empArray[2].gender = 'm';

displayEmpData(empArray[0].id,empArray[0].age,empArray[0].gender);
displayEmpData(empArray[2].id,empArray[2].age,empArray[2].gender);
printf("Id:%d | AGE:%d | GENDER :%c\n ",empArray[1].id,empArray[1].age,empArray[1].gender);

}

void structValAsParam()
{

struct Emp
{
int id;
char name[10];
int age;
char gender;
}emp1;

emp1.id = 1;
emp1.age = 20;
emp1.gender = 'm';
displayEmpData(emp1.id,emp1.age,emp1.gender);

}

struct Emp
{
int id;
char name[10];
int age;
char gender;
};

void structAsParam()
{
struct Emp emp1;

emp1.id = 1;
emp1.age = 20;
emp1.gender = 'm';

displayEmp(emp1);


}


void displayEmp(struct Emp empData)
{
printf("======Emp Data=======\n");
displayEmpData(empData.id,empData.age,empData.gender);
printf("\n======Emp Data=======");
}


void displayEmpData(int id,int age,char gender)
{
printf("ID: %d \n",id);
printf("Age: %d\n",age);
printf("Gender: %c",gender);
}

void structurePointer()
{
// int a  = 10 //123
// int *b = &a;
// int c = *b;

// *,&,->

struct Emp emp1;
struct Emp *emp2;
emp1.age = 10;
printf("%d",emp1.age);
emp2 = &emp1;
printf("%d",emp2->age);
structPointerFunc(&emp1);
printf("%d",emp1.age);


}

void structPointerFunc(struct Emp *empData)
{
empData->age = 20;
}

struct Record
{
struct Emp emp1;
int names[10][10];
};

void structAndArrayInsideStruct()
{
struct Record record1;
record1.emp1.age = 10;
record1.emp1.id = 1;
strncpy(record1.names[0],"abc",10);

printf("Age:%d\n",record1.emp1.age);
puts(record1.names[0]);

}

void unionDemo()
{
union data
{
int type;
char val;
int type2;
}dataVar;

dataVar.type = 97;
printf("Type:%d\n",dataVar.type);
printf("Val:%c\n",dataVar.val);
printf("type2:%d\n",dataVar.type2);
}

void enumDemo()
{

enum Direction
{
  //int North = 1;
  //int East = 2;
  North=1,East,West,South
};

printf("%d",South);
int direction;
scanf("%d",&direction);
printf("%d",direction);

switch(direction)
{
case North:
    printf("North");
break;
case East:
    printf("East");
break;
case West:
    printf("West");
break;
case South:
    printf("South");
break;
default:
    printf("No direction found");
}


}

void typedefDemo()
{
char ch;
int a;
typedef char Char;
Char mychar = 'A';
printf("%c",mychar);
}


