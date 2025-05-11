#include <stdio.h>
#include <string.h>

/*
    Question:
    Implement a C program to read the details of a device such as:
    - Device ID (int)
    - Device Name (string, max 50 characters)
    - Device Number (int)
    
    Store these as **union members**. Display the amount of memory allocated 
    in bytes by the union to the console. Justify your answer.

    Explanation:
    In a union, all members share the **same memory location**.
    So, the size of the union is equal to the **size of its largest member**.
    Thus, only one member's value can be stored at a time.
*/

union Device
{
    int deviceID;
    char deviceName[50];
    int deviceNumber;
};

int main()
{
    union Device d;

    d.deviceID = 101;
    printf("Device ID: %d\n", d.deviceID);

    strcpy(d.deviceName, "SmartSensor");
    printf("Device Name: %s\n", d.deviceName);

    d.deviceNumber = 98765;
    printf("Device Number: %d\n", d.deviceNumber);

    // Print the size of the union
    printf("\nMemory allocated by union: %lu bytes\n", sizeof(d));

    return 0;
}


/*
Justification:
    int deviceID → 4 bytes (typically)

    char deviceName[50] → 50 bytes

    int deviceNumber → 4 bytes

    Union size = max of these = 50 bytes

    👉 A union only allocates memory equal to its largest member.
*/