#ifndef CODEGENERATIONQ_H_
#define CODEGENERATIONQ_H_

#include <stdio.h>
#include "symbolsTable.h"

struct qMachine{
  int Ztop;
  int Htop;

  // R6 and R7 are reserved 
  int R[6];  //  = {0,0,0,0,0,0};
  int RR[4]; //= {0,0,0,0};

  int usedR;  // = 0
  int lastRstack; // = 0

  int nextLabel; // =0
  int nextCodeNumber;// = 0;

  char formatPutString[15];
  char formatPutInt[15];
  char formatPutChar[15];
  char formatGetInt[15];
  char formatGetChar[15];
  char formatNewLine[15];

  unsigned int formatPutStringAddress;
  unsigned int formatPutIntAddress;
  unsigned int formatPutCharAddress;
  unsigned int formatGetIntAddress;
  unsigned int formatGetCharAddress;
  unsigned int formatNewLineAddress;

  // When stat is 0, we are in a STAT block.
  // When stat is 1, we are in a CODE blocke
  int stat;  
};
typedef struct qMachine qMachine;

/**************************
  Initialization methods
**************************/
void qMachineInit( qMachine *Q );


/**************************
  Code generation methods 
**************************/

void generateCodeStart( FILE* yyout, qMachine *Q );

void generateCodeEnd( FILE* yyout );

int generateCodeVarStatic( FILE* yyout, qMachine *Q, registerStruct *r, char value[] );

//int generateCodeVarSaveValue( FILE* yyout, qMachine *Q, registerStruct *r1, 
//                          char value[] );

void generateCodePutStringLiteral( FILE* yyout, qMachine *Q, char string[] );

void generateCodePutVariable( FILE* yyout, qMachine *Q, registerStruct *r );

void generateCodeNewLine( FILE* yyout, qMachine *Q );

void generateCodeGetVariable( FILE* yyout, qMachine *Q, registerStruct *r );

void generateCodeAssignment( FILE* yyout, qMachine *Q, registerStruct *r1,
                             registerStruct *r2 );

void generateCodeMultiply( FILE* yyout, qMachine *Q, registerStruct *r1,
                             registerStruct *r2, char op );

void generateCodeAddition( FILE* yyout, qMachine *Q, registerStruct *r1,
                             registerStruct *r2, char op );

void generateCodeRelation( FILE* yyout, qMachine *Q, registerStruct *r1, 
                           registerStruct *r2, char op[] );

void generateCodeLogical( FILE* yyout, qMachine *Q, registerStruct *r1, 
                           registerStruct *r2, char op );

int generateCodeOpenWhile( FILE* yyout, qMachine *Q );

void generateCodeEvaluateWhile( FILE* yyout, qMachine *Q, int outLabel );

void generateCodeCloseWhile( FILE* yyout, qMachine *Q, int outLabel );

void generateCodeEvaluateIf( FILE* yyout, qMachine *Q, int outLabel );

void generateCodeNextIf( FILE* yyout, qMachine *Q, int outIfLabel, int nextElseLabel ); 

void generateCodeBeginSubprogram( FILE* yyout, qMachine *Q, registerStruct *r );

void generateCodeSubprogramBase( FILE* yyout, registerStruct *r );

void generateCodeEndSubprogram( FILE* yyout, qMachine *Q, registerStruct *r );

void generateCodeProcedureCall( FILE* yyout, qMachine *Q, symbolsTable *sT, registerStruct *r, registerStruct *parametersCalled );


/******************************
  Q machine management methods 
******************************/
char getVarMemLabel (variableType vT);

int getSize( registerStruct *r );

int getVarStaticAddress( qMachine *Q, registerStruct *r );

int setParamsStackAddress( qMachine *Q, registerStruct **parent );

int setVarStackAddress( qMachine *Q, registerStruct *r, registerStruct **parent );

int newRegister( FILE* yyout, qMachine *Q );

int popRegister( FILE* yyout, qMachine *Q );

int lastRegister( qMachine *Q );

int pushRstack( FILE* yyout, int r );

int popRstack( FILE* yyout, int r );

#endif