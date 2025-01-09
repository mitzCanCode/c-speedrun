//
//  main.c
//  C test
//
//  Created by Dimitris Chatzigeorgiou on 9/1/25.
//

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    
    // MARK: HELLO WORLD!!!
    printf("Hello, World!\n");
    
    
    // MARK: C 101
    
    // Creating an int variable
    // To display use: %d
    int intVar1;
    int intVar2 = 5;
    
    // Creating a float variable
    // To display use: %f
    float floatVar1;
    float floatVar2 = 5.0;
    
    // Creating a double variable
    // Has double the persicion of a float
    // To display use: %f
    double doubleVar1;
    double doubleVar2 = 5.0;
    
    
    // Creating a single character variable
    // To display use: %c
    char character1;
    char character2 = 'C';
    
    // Creating a string variable
    // To display use: %c
    // I can either set an explicit size (1) or an initializer (2)
    char string1[20]; // (1)
    char string2[] = "This is the second string!"; // (2)
    
    
    // Creating a boolean variable
    // To work with booleans i need to import: <stdbool.h>
    // To display use: %d
    bool boolVariable1;
    bool boolVariable2 = true; // true = 1, false = 0
    
    // Math operators:
    // + = addition
    // - = subtraction
    // * = multiplication
    // / = division
    // % = modulus
    // ++ = increment
    // -- = decrement
    
    // Augmented assignment operators
    // +=
    // -=
    // *=
    // /=
    // %=
    
    // Logic operators:
    // &&, ||, !, ==
    
    // Logic values:
    // true, false
    
    // Double quotes(" ") are used for string where as single quotes(' ') are used for characters
    
    
    // Constants
    // To create a constant put the keyword "const" before the keyword of
    
    
    // MARK: IO
    
    // Printing
    printf("String here (1)" /*, (2) */); // (1) Here a format identifier can be specified and used to replace that location of the string with the value of (2)
                                          // (2) Here the variable we want to be placed at the location of the format identifier is placed
    
    
    // User input:
    // Method 1
    scanf("%d", &intVar1); // %d can be any format identifier depending on the type of input we are expecting
                           // intVar1 is the variable which we want to read the value into.
                           // WARNING: 'scanf' DOES NOT accept white spaces. Anything AFTER a white space WILL BE IGNORED
                           // NOTE: '&' is a character which is used as a pointer. It doesnt need to be used with strings. Don't ask me why dude idk, GOOGLE IT.
                           // NOTE FOR FUTURE MITZ: Add an explanation for when '&' needs to be used
    
    // Method 2
    fgets(string1, 25, stdin); // Argument 1 = The variable in which we want to pass the value of the input
                               // Argument 2 = The size (in bytes) we want the variable to have
                               // Argument 3 = The flow stream in which the input comes from
                               // WARNING: When enter is pressed '\n' will also be accepted is a character. Fix for this coming soon
    
    
    
    
    //  MARK: Format specifiers
    // Defines and formats a type of data to be displayed
    
    // %c = Character
    // %s = string
    // %d = digit
    // %f = float
    // %lf = double
    
    // %.1 = Decimal precision
    // %1 = minimum field width
    // %- = left align
    
    // Example:
    float item1 = 69.99;
    float item2 = 420.69;
    float item3 = 6.999;
    
    printf("Item 1: %8.1f\n", item1); // Printing item 1 up to the 1st digit after the dot and the entire line takes a minimum of 8 characters in terms of space
    printf("Item 2: %8.2f\n", item2); // Printing item 2 up to the 2nd digit after the dot and the entire line takes a minimum of 8 characters in terms of space
    printf("Item 3: %-4.3f\n", item3); // Printing item 3 up to the 3rd digit after the dot and the entire line takes a minimum of 4 characters in terms of space and is alligned to the left


    
    // MARK: Arrays
    int testArray[10];
    int someVariableCauseIisInUseBelow; // why tf didn't you just use j ffs
    for (someVariableCauseIisInUseBelow = 0; someVariableCauseIisInUseBelow<10; someVariableCauseIisInUseBelow++){
        testArray[someVariableCauseIisInUseBelow] = someVariableCauseIisInUseBelow;
    }
    
    for (someVariableCauseIisInUseBelow = 0; someVariableCauseIisInUseBelow<10; someVariableCauseIisInUseBelow++){
        printf("%d\n", testArray[someVariableCauseIisInUseBelow]);
    }
    
    
    // MARK: if, else if, else
    int x = 2;
    
    if (x==2){
        printf("Yes x is in fact 2\n");
    }else if (x == 3){
        printf("No sorry its not 3\n");
    }else {
        printf("That not it...\n");
    }
    
    // MARK: Switch statments

    

    
    
    

    
    // MARK: For loop
    int i;
    for (i=0;i<=15;i++) {
        printf("I actually happen to like C a lot!\n");
    }
    
    // MARK: While loop
    while(x<10) {
        printf("Enter a number bigger than 10\n");
        scanf("%d", &x);
    }
    
    // MARK: do-while
    do{
        printf("Enter a number smaller than 10\n");
        scanf("%d", &x);
    } while (x >= 10);
    
    
    
    // MARK: Sample bubble sort
    int counter;
    int table[5];
    int done;
    done = false;
    table[0] = 3;
    table[1] = 50;
    table[2] = -1;
    table[3] = 2;
    table[4] = 1000;
    
    while (!done) {
        done = true;
        for (counter  = 0; counter<4; counter++){
            if (table[counter] > table[counter+1]){
                // Swapping 2 variables without a temp variable cause im simply THAT GUY
                table[counter] = table[counter+1] + table[counter];
                table[counter+1] =  table[counter] - table[counter+1];
                table[counter] =  table[counter] - table[counter+1];
                done = false;
            }
        }
    }
    
    for (counter  = 0; counter<5; counter++){
        printf("%d\n", table[counter]);
    }
    
    
    
    
    // MARK: Simple sum calculator
    int number, number2, sum;
    
    printf("Enter a number:\n");
    scanf("%d", &number);
    
    printf("Enter a second number:\n");
    scanf("%d", &number2);
    
    sum = number + number2;
    
    printf("The result is %d\n", sum);

    
    return 0;
}


