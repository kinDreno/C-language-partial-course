#include <stdio.h>

int main() {

1). Format Specifiers.

Data Type	         |   Format Specifier                  | 	Example Usage           |  Output Example
String	             |   %s	                               |    printf("%s", str);	    |   Hello
Integer	             |   %d or %i	                       |    printf("%d", num);      |   42
Unsigned Int         | 	%u                                 |    printf("%u", num);      |   42
Hexadecimal	         |   %x (lowercase) or %X (uppercase)  |    printf("%x", num);	    |   2a or 2A
Octal	             |   %o	                               |    printf("%o", num);	    |   52
Float	             |   %f	                               |    printf("%f", num);	    |   3.140000
Scientific Notation	 |   %e (lowercase) or %E (uppercase)  |    printf("%e", num);	    |   3.140000e+00 or 3.140000E+00
Character	         |   %c	                               |    printf("%c", ch);	    |   A
Pointer Address	     |   %p	                               |    printf("%p", ptr);      |  	0x7ffeed1f3b70
Length Modifier	     |   %ld for long, %lld for long long  |	printf("%ld", num);	    |   9223372036854775807


Note: Hindi niyo kailangan sauluhin lahat yan. 
String, Integer, Float, Character, Float lang probably yung magagamit niyo diyan.
    return 0;
}