#include "stack.h"

int stack[max];
int top=-1;

void push(int m){   
	top++;   
	stack[top]=m;
}


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
