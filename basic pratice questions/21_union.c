#include <stdio.h>
#include <string.h>

// Defining a union
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data d;

    // Assign integer value
    d.i = 10;
    printf("Integer: %d\n", d.i);

    // Assign float value (overwrites previous value)
    d.f = 20.5;
    printf("Float: %.2f\n", d.f);
    printf("Integer after float assignment: %d\n", d.i); // Overwritten

    // Assign string value (overwrites previous value)
    strcpy(d.str, "Hello");
    printf("String: %s\n", d.str);
    printf("Float after string assignment: %.2f\n", d.f); // Overwritten

    return 0;
}

// Union shares memory, so assigning f overwrites i, and assigning str overwrites f