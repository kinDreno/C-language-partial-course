8). Array Methods

    int numbers[3] = {10, 20, 30};

   access each element using its index
    int first = numbers[0];
    int second = numbers[1];
    int third = numbers[2];

    | Print the values
    printf("First: %d\n", first);
    printf("Second: %d\n", second);
    printf("Third: %d\n", third);


Ang C language ay walang array methods gaya ng ilang language na meron.

Gaya ng, pop() insert() append() reverse()

kaya, kailangan mo gumawa ng built-in.

And yeah. mahirap gumawa ng built-in. and uhh.. Wag mo nalang problemahin..

#include <stdio.h>
#define MAX_SIZE 10 | Define maximum length of the array

| append function
void append(int arr[], int *size, int value) {
    if (*size < MAX_SIZE) {
        arr[*size] = value;
        (*size)++;
    } else {
        printf("Array is full. Cannot append %d\n", value);
    }
}

| function para ma lagyan ng value
void insert(int arr[], int *size, int value, int index) {
    if (*size < MAX_SIZE && index <= *size) {
        for (int i = *size; i > index; i--) {
            arr[i] = arr[i - 1]; | Shift elements to the right
        }
        arr[index] = value;
        (*size)++;
    } else {
        printf("Cannot insert %d at index %d\n", value, index);
    }
}

| function to remove a value
int pop(int arr[], int *size) {
    if (*size > 0) {
        return arr[--(*size)]; | decrease yung size and i-output ang last element.
    }
    printf("Array is empty. Cannot pop.\n");
    return -1; | Error value
}

| function para matanggal lahat ng laman sa array
void clear(int arr[], int *size) {
    *size = 0;
}

int main() {

    int arr[MAX_SIZE];
    int size = 0; // size ng array

    // use the custom functions
    append(arr, &size, 5);
    append(arr, &size, 10);
    insert(arr, &size, 7, 1); // Insert 7 at index 1
    int poppedValue = pop(arr, &size);
    printf("Popped value: %d\n", poppedValue);
    clear(arr, &size);
    printf("Array size after clearing: %d\n", size);

    return 0;
}