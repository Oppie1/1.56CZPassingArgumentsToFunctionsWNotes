#include<stdio.h>
#include<stdlib.h>



//Passing arguments into functions means function needs an extra piece of info in order to work.

void convertToDollars(float euro);//This is just a type of variable and assigns it a place holder.

int main() {

	float euroPrice1 = 1.00;//These are just a float varriable being assigned to an acutal number is.
	float euroPrice2 = 5.50;//We pass these as arguments into the parameters below
	//So we are passing these variables/numbers as arguments to the function.

	//Below we pass the argument into the parameter "()" So convertToDollars(parameter) --> (1.00) See** 
	//in void function below main
	convertToDollars(euroPrice1);//This is a function. Look at how this resembles the void function.
//"euroPrice1" acts like a placeholder for "float euro" and inevitabley the actual number variable it is set to (1.00)
	convertToDollars(euroPrice2);//These fit into the float placeholder "euro" -->euroPrice2=5.50
	convertToDollars(21.30);//The computer knows that these fit into the parameter of "(float euro)"
	//In this case we just use an exact number rather than assigning variables

	return 0;
}

void convertToDollars(float euro) {//Not returning anything back to the function/main. Just going to take the euro price from
	//main call and use the defition below to perform calculation and print to screen. Just gets info from main.
	float usd = euro * 1.37;//This is just the equation for the usd variable to convert euro's to dollars.
	//**So for convertToDollars(1)--> float usd = (1) * 1.37. 1 dollar = 1.37 dollars
	//**So for converToDollars(5.5) --> usd = (5.5)*1.37 = 7.53. 5.5 euro = 7.53 USD
	//**So convertToDollars(euro)--(euroAmmount)--> USD
	printf("%.2f Euros - %.2f USD\n", euro, usd);

	return;
}

/*Arrguments and paramters are related but not the same thing
Parameter. A parameter is a variable in the function definition. It acts as a placeholder for
the value that will be provided when the function is called. Example:
In void convertToDollars(float euro). euro is a parameter
Argumanet: An argument is the actual value or variable you pass to the function when
you call it. Example:
In convertToDollars(euroPrice1); euroPrice1 is an argument
Summary: Parameters are used in function defintions
Aruguments are used in function calls.  They work together: arguments fill the parameters
when function runs.*/
