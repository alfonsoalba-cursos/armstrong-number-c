is_armstrong_number : main.o 
	gcc main.o -o is_armstrong_number -lm 
main.o : main.c
	gcc -c main.c
clean-reports:
	rm reports/cppcheck/*
clean: clean-reports
	rm main.o is_armstrong_number

cppcheck-xml :
	cppcheck *.c --xml --xml-version=2 --enable=all --inconclusive --language=c *.c 2>reports/cppcheck/report.xml
cppcheck : 
	cppcheck *.c --enable=all --inconclusive --language=c *.c
