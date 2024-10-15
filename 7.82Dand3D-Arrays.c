7. Multidimensional Array

Pwede mo din gamitin tong method para makapaglagay ng strings sa loob ng Array.

#include <stdio.h>

int main() {
   1). Magsimula muna tayo sa Two Dimensional odikaya 2D Array.

    int this[2][3] = {
        {1, 2, 3}, 2 Rows
        {4, 5, 6}  3 Columns
    }
Woah? Paano yan? Bakit ganyan ang Structure?

Intindihin natin. 
Syntax ng 2D Arrays:
type name[rows][columns] = {
    {},
    {},
    {},
    {}and so on..
}; Wag kalimutan ang semi-colon..

Siya nga din pala.. kahit hindi ka na maglagay ng value sa rows.
dahil alam na agad ng compiler na 2D Array ang sinulat mo.
Example: int number[][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8}
    {9, 10, 11, 12},
    {13, 14, 15, 16}
    {write as long as you like..}
}

Paano naman natin ma a-access ang value nyan?
Example:
int clang[2][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8}
};

Dito, meron syang 2 Columns and 4 Rows
Kung gusto natin ma access ang 5, 
sa 2D arrays ay kailangan muna natin specify kung nasaang row siya.
at kung saang index ba siya ng column.

Example:
printf("%i", clang[1][0]) Output: 5

Explanation:
clang[1][0]

1 ang nakalagay sa unang square brackets dahil ang pangalwang Row ang kukuhanan natin ng value.
kung ang unang Row ang kukuhaan natin ng value ay dapat [0] yan. Dahil ang index ng mga arrays or lists
ay nagsisimula sa zero.

Pati na din ang values na nasa iibang columns ay nagsisimula sa zero.

2). Write Strings or Characters within an Array.

syntax: char name[laman sa loob][maximum length of the string] = {.....}

example:
 char strings[5][20] = {
        "Hello",
        "C programming",
        "Arrays",
        "Sample",
        "Goodbye!"
    };

Dito nagsulat ako ng arrays na may limang laman
dahil naka indicate na [5] lang ang dapat laman sa loob.
at ang [20] naman ang nagsasabi na kung hanggang ilan lang ba dapat ang length ng strings.
Which is 20.

Access:
printf("First string: %s\n", strings[0]);          // Access first string
printf("Second string: %s\n", strings[1]);         // Access second string
printf("Third string: %s\n", strings[2]);          // Access third string
printf("Fourth string: %s\n", strings[3]);         // Access fourth string
printf("Fifth string: %s\n", strings[4]);          // Access fifth string

 // Access and print specific characters
printf("First character of the first string: %c\n", strings[0][0]); // 'H'
printf("Third character of the second string: %c\n", strings[1][2]); // 'p'
printf("Last character of the fourth string: %c\n", strings[3][5]); // 'e'


Pwede ka din gumamit ng pointer 
 char *strings[] = {
        "Hello, World!",
        "Welcome to C programming.",
        "Strings in C are arrays.",
        "This is a sample string.",
        "Goodbye!"
    };

    printf("First string: %s\n", strings[0]); // Access the first string
    printf("Second string: %s\n", strings[1]); // Access the second string
    printf("Fifth string: %s\n", strings[4]); // Access the fifth string
}