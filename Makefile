is_armstrong_number : main.o stack.o armstrong.o
	gcc main.o stack.o armstrong.o -o is_armstrong_number -lm 
main.o : main.c
	gcc -c main.c
armstrong.o : armstrong.c
	gcc -c armstrong.c
stack.o : stack.c
	gcc -c stack.c	
clean-reports:
	rm -f reports/cppcheck/*
clean: clean-reports
	rm -f main.o stack.o is_armstrong_number

cppcheck-xml :
	cppcheck *.c --xml --xml-version=2 --enable=all --inconclusive --language=c *.c 2>reports/cppcheck/report.xml
cppcheck : 
	cppcheck *.c --enable=all --inconclusive --language=c *.c
doc:
	doxygen
