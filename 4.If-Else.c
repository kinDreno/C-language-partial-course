4. Conditions or Conditions Making using if, else if, and else.

#include <stdio.h>

int main() {

Ang `if` statement ay susuriin kung ang condition ay True or False. 
Tandaan mo na ang True or False ay isang boolean. Yan ang result na lumalabas lagi sa `if else` Statements.

Meron din tayong tinatawag na Comparison Operators 
or Relational Operators.


    Operator	            |    Description Example
==	Equal to	            |    if (a == b)
!=	Not equal to	        |    if (a != b)
>	Greater than	        |    if (a > b)
<	Less than	            |    if (a < b)
>=	Greater than or equal to|	 if (a >= b)
<=	Less than or equal to	|    if (a <= b)

Yan ang ginagamit most of the time sa mga if else conditions.
odikaya "Checkers"


int num = 0  | declare a variable that has a type "integer" that has a value of 10

1. USING `if` statement

    if (num == 10) |  Ang tawag dito ay `Condition`
 {
    printf("The Condition is correct / true");  | Ang tawag dito ay `Executioner`
} 

2. USING `else if` statement

Ngayon, paano kung meron kang two or more conditions na gustong gamitin?
Dito ka na gagamit ng `else if` statement.

if (10 > 60) {
    printf("10 is greater than 60!!") | Hindi mag r-run tong code dahil ang condition ay mali
                                      | You failed basic math if you thought 10 is greater than 60.
} else if (90 > 10) {
printf("This code would run")         | Ito ang mag r-run dahil alam naman natin an 90 is greater than 10.
}

Tandaan: Na ang mag r-run lang sa else if statements ay ang mga `Condition` na tama or true!

3. Using `if, else if, and else` statement together.

int thisNum = 10
int gradeMo = 5
int numbr = 15

if (thisNum == gradeMo) {
    printf("This wouldn't run");
} else if (thisNum == 60) {
    printf("10 is not equal to 60. This wouldn't run.")
} else if (90 < 12) {
    printf("HINDI RIN TO MAG R-RUN!!")
} else {
    printf("Wala sa conditions ay tama.")
}

Ask: Kailan ko gagamitin ang `else` statement?
Answer: Kung lahat ng condition na ginawa mo ay mali, edi ang `else` statement ang mag r-run.

4. With user Inputs

    int number; | Variable declaration.

    
    printf("Enter an integer: ");
    scanf("%d", &number); | Babasahin ang value ng number

    | Use if, else if, and else statements to check the value of number
    if (number < 0) {
        printf("You entered a negative number.\n");
    } else if (number == 0) {
        printf("You entered zero.\n");
    } else {
        printf("You entered a positive number.\n");
    }



Summary:
Ang mag r-run lang na code sa else if statements ay ang mga condition na true!
    return 0;
}