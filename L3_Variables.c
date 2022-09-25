
int abc = 10; //global variable scope limited to file
int externalVar = 10;
void introToVar()
{
    //variables
    int number = 10; //1,11,22
    char charvar; //'a','b'
    float floatVar; //2.0,2.33
}

//local Var
void localVariable()
{

    // local variables
    int number = 10; //1,11,22
    char charvar; //'a','b'
    float floatVar; //2.0,2.33
    printf("%d \n",abc);
}

void globalVariable()
{
    //access global variable
    printf("%d",abc);
}



//1.External
void externalVariable()
{
extern int externalVar;
printf("%d",externalVar);

}

//2.Static
void staticVariable()
{

static int number = 10;
number+=1;
printf("%d,",number);
}

void nonStaticVariable()
{
int number = 10;
number+=1;
printf("%d,",number);
}

//3.Register
void registerVariable()
{
register int number = 10;
number+=1;
printf("%d,",number);
}


