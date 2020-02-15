/**
 * \file
 *
 *  Programa que comprueba si un número es un número de Armstrong.
 */
# include <stdio.h>
# include <math.h>

/**
 * Número máximo de elementos que pueden almacenarse en el stack auxiliar.
 *
 * 
 */
#define max 20

/**
 * Variable que contiene el índice del último elemento introducido en el stack
 */ 
int top=-1;

/**
 * Array que se utiliza para hacer el cálculo que permite saber si un número
 * es un número de Armstrong.
 * 
 */
int stack[max];
void push(int);
int pop();
int is_armstrong_number(int );

/**
 * La función principal del programa
 * 
 */
void main(){   
	int n;   
	printf("Introduce un número entero");   
	scanf("%d",&n);   
	if (is_armstrong_number(n))      
		printf("%d es un número de armstrong \U0001F60E \n", n);   
	else printf("%d no es un número de armstrong \U0001F622 \n", n);
}

/**
 * Función que devuelve verdadero si el número es un número de Armstrong
 */
int is_armstrong_number(int numb){   
	int j, remainder, temp, count, value;   
	temp=numb;   
	count=0;   
	while(numb >0)   {      
		remainder=numb%10;      
		push(remainder);      
		count++;      
		numb=numb/10;   
	}   numb=temp;   
	value=0;   
	while(top >=0)   {      
		j=pop();      
		value=value+pow(j,count);   
	}   
	
	if(value==numb)
		return 1;   
	else 
		return 0;
}

/**
 * Introduce un elemento en el stack
 */ 
void push(int m){   
	top++;   
	stack[top]=m;
}


/**
 * Saca un elemento del stack
 */
int pop(){   
	int j;   
	if(top==-1)
		return(top);   
	else   
	{      
		j=stack[top];      
		top--;      
		return(j);   
	}
}

void cpp_check_warning_function(){
	return stack[max];
}
