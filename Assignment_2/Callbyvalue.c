#include <stdio.h>

// Define a structure to wrap the array
struct ArrayWrapper {
    int arr[5];
};

// Function that takes the structure by value (simulating call by value)
void updateArray(struct ArrayWrapper array) {
    printf("Array inside the function (before update):\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", array.arr[i]);
    }
    printf("\n");

    // Update the array values
    for(int i = 0; i < 5; i++) {
        array.arr[i] += 10;  // Example update: add 10 to each element
    }

    printf("Array inside the function (after update):\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", array.arr[i]);
    }
    printf("\n");
}

int main() {
    // Initialize the array
    struct ArrayWrapper arrayWrapper = {{1, 2, 3, 4, 5}};

    // Print the array in the main function before calling updateArray
    printf("Array in main function (before function call):\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arrayWrapper.arr[i]);
    }
    printf("\n");

    // Call the function
    updateArray(arrayWrapper);

    // Print the array in the main function after calling updateArray
    printf("Array in main function (after function call):\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arrayWrapper.arr[i]);
    }
    printf("\n");

    return 0;
}
