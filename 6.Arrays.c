6). mas prefer ko sya tawagin na ARRAYS at hindi LISTS!! (laking javascript kasi hihi)

#include <stdio.h>

int main() {

    Parehas lang ang Array at Lists. 
    Magkaiba nga lang ang syntax ng C Language sa arrys, compare sa language na python at javascript.


syntax: type name[length of the array] = {values, values, values, ..and so on}; H'wag kalimutan ang semi-colon.

Halimbawa:
int clang[5] = {1, 2, 3, 4, 5};

Explanation: ang type ng ginawa ko na array ay int or integer.
            na ang pangalan ay `clang` na merong square brackets []
            sa loob ng square brackets ilalagay kung ilan yung magiging laman ng array or length.
            ang ginawa ko ay [5] so meron siyang limang values sa loob.

            sunod ay ang square brackets or curly braces {} ilalagay doon ng limang values sa loob.

Ngayon, kukuha naman tayo ng value sa array.
int clangi[5] = {1, 2, 3, 4, 5}; Wag kalimutan ang semi-colon..
printf("%i",clangi[0]) // Output: 1

Tandaan: Na ang nag sisimula ang index ng array sa zero.

    return 0;
}