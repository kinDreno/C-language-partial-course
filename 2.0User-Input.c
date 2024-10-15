#include <stdio.h>

int main() {
    int number;
    float decimal;
    char name[50]; -> Declare a variable of string na merong maximum length of 50

    // Asking for user input
    printf("Enter an integer: ");
    scanf("%d", &number); // Read an integer

    printf("Enter a decimal number: ");
    scanf("%f", &decimal); // Read a float

    printf("Enter your name: ");
    scanf("%s", name);

    printf("You entered: %d (integer), %.2f (float), and your name is: %s\n", number, decimal, name);
    // Displaying the entered values


    Note: Kapag merong Space yung input sa name,
    ay hindi na i-include ni compiler yon.

    Example: 
    Ang nilagay mo ay "John Doe"
    Ang output nyan ay "John"
    dahil pag may space, ay hindi na binabasa ni compiler yun.
    ganun gumagana si scanf(). pero..

    merong alternative si scanf() at yun ay si fgets()

    example:
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

        Example: Input mo ay "John Doe"
        ang Output sa baba ng print ay "Your name is: John Doe"
    printf("Your name is: %s\n", name); // Print the name

    merong unfamiliar functions and keyword.. yung sizeof() and stdin
    breakdown natin kung paano sya gumagana.
    
    fgets(variable, sizeof(), stdin)
   1). so ilalagay muna sa harapan ang variable kung saan ilalagay ang inputted na string.
   2). sa sizeof() naman ay iche-check nya kung hanggang saan ba ang maximum length ng string na i-input ng user
   3). ang paggamit naman ng `stdin` ay 
   kinakailangan para sa fgets() dahil ito yung nagbabasa at nagiintay ng value sa user-input.

   And yes. ganyan lang syntax nya kumpara sa scanf() na kailangan pa ng formatter
    tulad ng %d, %f

    return 0;
}
