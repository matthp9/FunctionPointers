/**
 * Matthew Allen Phillips
 * 5 March 2017
 * Simple function pointer demo I
 * made after reading the chapter
 * in my book on function pointers.
 */ 

void print1();
void print2();
void print3();
void print4();

// Runs a demo of function pointers in C.
// (1) Creates a directory of function pointers.
// (2) Calls function pointer destinations.
// (3) Dynamically changes/updates function pointer directory.
int main() {
	void (*printFunctions[])(void) = {print1, print2, print3, print4};
	
	(*printFunctions[0])(); // Calls the function pointed to at printFunctions[0]
	(*printFunctions[1])(); // Calls the function pointed to at printFunctions[1]
	(*printFunctions[2])(); // Calls the function pointed to at printFunctions[2]
	(*printFunctions[3])(); // Calls the function pointed to at printFunctions[3]
	
	printFunctions[0] = printFunctions[1];
	printFunctions[1] = printFunctions[2];
	printFunctions[2] = printFunctions[3];

	(*printFunctions[0])(); // Calls the function pointed to at printFunctions[0]
	(*printFunctions[1])(); // Calls the function pointed to at printFunctions[1]
	(*printFunctions[2])(); // Calls the function pointed to at printFunctions[2]
	(*printFunctions[3])(); // Calls the function pointed to at printFunctions[3]
}

void print1() {
	printf("Print One\n");
}

void print2() {
	printf("Print Two\n");
}

void print3() {
	printf("Print Three\n");
}

void print4() {
	printf("Print Four\n");
}
