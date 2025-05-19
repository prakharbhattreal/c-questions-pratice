#include <stdio.h>

/*
    Declare item_code, item_name, quantity,
    and unit_per_rate as the members of a
    union and a structure. Compare the
    memory allocated by the structure and
    union types using a fragment of C code.
    Which of these needs more memory ?
    Justify.
*/

struct itemStruct
{
    int item_code;
    char item_name[20];
    int quantity;
    int unit_per_rate;
};

union itemUnion
{
    int item_code;
    char item_name[20];
    int quantity;
    int unit_per_rate;
};

int main(){
    struct itemStruct s;
    union itemUnion u;

    printf("Size of structure :%lu\n", sizeof(s));
    printf("Size of union :%lu\n", sizeof(u));
    return 0;
}

/*
    JUSTIFICATION:

    In the structure, each member gets its own memory:
        int item_code → 4 bytes
        char item_name[20] → 20 bytes
        int quantity → 4 bytes
        float unit_per_rate → 4 bytes
        Total = 32 bytes (including alignment)

    In the union, all members share the same space — the size of the largest member:
        char item_name[20] → 20 bytes
        So total = 20 bytes

    Conclusion:
    
    Structures need more memory than unions.
    Because:
        struct: allocates memory for all members together.
        union: allocates memory for only the largest member (all others reuse that space).

*/