bison -d syntacticAnalyzer.y -o compiler.tab.c 

flex lexicalAnalyzer.l 

gcc lex.yy.c compiler.tab.c symbolsTable.c -lfl -o compiler

echo done