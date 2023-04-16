#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

void list(int arg_count, ...)
{


    va_list ap;

    va_start(ap, arg_count);

    for (int i = 1; i <= arg_count; i++)
       printf("%d,",va_arg(ap, int));
}

void main(int argc,char *argv[])
{
    //printf("%d",argc);
    //printf("%s",argv[1]);
   //Call Program by Function Name
   //helloWorld();
   //scanInput();
   //sumOfTwoNumber();
   //introToVar();
   //typeCast();
   //encode(97);
   //decode('a');
   //constType();
   //arithmeticOperator();
   //logicalOperator();
   //bitwiseOperator();
   //elvisOperator();
   //sizeOfOperator();
   //starAndMemoryOperator();
   //swapProgram();
     //tempConverter();
     //ifElse();
     //nestedIfElse();
     //ifElseLadder();
     //terneryCondition();
     //switchStatment();
     //nestedSwitchStatement();
     //doWhileLoop();
     //printf("Return%d",returnStatment());
     //breakStatment();
     //continueStatement();
     //gotoStatment();
     //singleDimension();
     //strings();
     //multidimensionalArray();
     //pointerDemo();
     //pointerArray();
     //pointerToFunction();
     //dyanamicAllocatedArray();
      //functionDemo();
      //functionWithArgument(10,11,13,'a');
      //printf("%d",functionWithReturn(10));
      //functionCallByRefrence();
      //functionWithArray();
      //recursionDemo(1);
      //recursionApp(1,5);
      //list(3,1,2,3);
      //structureDemo();
      //structureArray();
      //structValAsParam();
      //structAsParam();
      //structurePointer();
      //structAndArrayInsideStruct();
      //unionDemo();
      //enumDemo();
      //typedefDemo();
      //readAndWriteCharDemo();
      //readAndWriteStringDemo();
      //recordCreation();
      //demoPrintfFormatter();
      //demoScanfFormatter();
      //openAndCloseFile();
       //readFileStream();
       //writeData();
       //skipContent();
       //removeContent();
       //rewindContent();
       //preprocessorsDemo();
       //stackDemo();
       //demoOfQueue();
       //linkedListDemo();
       //demoFileUtility();
       debugDemo();
}



