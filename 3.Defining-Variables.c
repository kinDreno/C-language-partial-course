2). Defining Variables and Printing Variables.

    #include <stdio.h> 

int main() {


Defining variables
int age = 25;            // Integer variable
float height = 5.9;      // Floating-point variable
char initial = 'A';      // Character Or One length of String.


printf("Age: %d\n", age);         // Output: Age: 25
printf("Height: %.1f\n", height); // Output: Height: 5.9
printf("Initial: %c\n", initial); // Output: Initial: A


Note: Baka magtaka kayo kung paano mag sulat ng strings tulad ng "Hello World!"
bawal gamitin ang 'char' dahil ang ibig sabihin nyan ay ONE length of string lang.

Example: "A", "a", "b"
Oh diba iisa lang? Pero, paano ba pag marami?

Walang support ang C language para sa strings or characters formatter. 
Pero, merong paraan para magawa yan.

method 1). char *name = "John Smith"
Ito ay natatangap, pero!! Yan ay naka set as readonly
ang ibig sabihin ay, hindi pwede paltan ang value.

Q: Para saan yung asterisk sa taas? indicator ba yan na multiple string?
A: No. Ang tawag dyan ay pointer. Pointer na cino-convert sa String Literal.

method 2). char name[] = "John Smith";
Ang method na yan ay tinatawag na array of characters.
ang [] ay nag i-indicate na yan ay array of characters or strings.
Kapag ganyan ang ginamit mo ay pwede mo baguhin ang value.


return 0;
    }