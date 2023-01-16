/*
 * Calculator.cpp
 *
 *  Date: 01/15/2023
 *  Author: Dakota D. Steinberger
 *
 *  How I fixed/modified the following program:
 *  I first started with all the issues underlined in
 *  red by my IDE. This allowed to fix many syntax
 *  errors in the program. I then ran the program and
 *  saw no output. I was able to fix the while loop
 *  and then received output on the terminal. After
 *  doing this, I went back and forth between fixing
 *  logic errors and running the program, making few
 *  changes between each run of the program. Once all
 *  logic errors had been resolved, I created the
 *  requested if statement to allow users to input N or n
 *  to quit the program and receive the "Program Finished."
 *  message. Finally, having fixed all errors and
 *  adding all requested functionality, I made some
 *  modifications to the code and output statements to
 *  "beautify" the program on both sides so that the
 *  code AND the program's output are easier to read.
 *
 */

#include <iostream>

using namespace std;

int main() // Changed void to int so the below function will return integer type data.
{
	// char statement[100]; Removed this variable/array declaration since it is never used in the program.
	int op1, op2;
	char operation;
	char answer = 'Y'; // Added whitespace around = and ; to end of line. Changed double quotes to single quotes for char type.
	while ((answer == 'Y') || (answer == 'y')) { // Added whitespace around ==. Added 'Y' to while loop allowing for both lower and uppercase characters to be input.
        /*
         * Added brackets to ALL if statements as best practice.
         * Added \n (newline) character to various output statements for nicer formatting during program execution.
         */
		cout << '\n' << "Enter expression" << endl;
		cin >> op1 >> operation >> op2; // Switched variables op2/op1 to ensure appropriate program functionality.
		if (operation == '+') { // Changed double quotes to single quotes for char type. Removed ; from if statement.
            		cout << op1 << " + " << op2 << " = " << op1 + op2 << '\n' << endl; // Changed >> to << for output. Removed ; from if statement.
        	}
		if (operation == '-') {
		    	cout << op1 << " - " << op2 << " = " << op1 - op2 << '\n' << endl; // Changed >> to << for output.
		}
		if (operation == '*') {
		    	cout << op1 << " * " << op2 << " = " << op1 * op2 << '\n' << endl; // Added ; to end of line. Changed / to * to appropriately output expression operator.
		}
		if (operation == '/') {
		    	cout << op1 << " / " << op2 << " = " << op1 / op2 << '\n' << endl; // Changed * to / to appropriately output expression operator.
		}

		cout << "Do you wish to evaluate another expression?\nY to continue, N to end: " << endl; // Provided user with input options on a new line for clarity.
		cin >> answer;

		if ((answer == 'N') || (answer == 'n')) { // if statement to providing output when user input N or n for the answer variable.
			cout << '\n' << "Program Finished." << endl;
        	}
	}
    return 0; // Indicates successful program execution and completion.
}
