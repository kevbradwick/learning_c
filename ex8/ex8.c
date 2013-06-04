#include <stdio.h>

int main(int argc, char *argv[])
{
    int areas[] = {10, 12, 13, 14, 20};
    char name[] = "Kevin";
    char full_name[] = {
        'K', 'e', 'v', 'i', 'n', ' ', 'B', 'r', 'a', 'd', 'w', 'i',
        'c', 'k', '\0' 
    };

    printf("The size on an int: %ld.\n", sizeof(int));
    printf("The size of areas (int[]): %ld\n", sizeof(areas));

    printf("The number of ints in areas: %ld.\n",
            sizeof(areas) / sizeof(int));

    printf("The first line of areas is %d and 2nd is %d.\n", 
            areas[0], areas[1]);

    printf("The size of a char: %ld.\n", sizeof(char));

    printf("The size of name (char[]): %ld.\n", sizeof(name));

    printf("The number of chars: %ld.\n",
            sizeof(name) / sizeof(char));

    printf("The size of full_name (char[]): %ld.\n", 
            sizeof(full_name));

    printf("The last char of name[5] is: %c.\n", name[5]);

    printf("The number of chars: %ld.\n",
            sizeof(full_name) / sizeof(char));

    printf("name='%s', full_name='%s'.\n", name, full_name);



    return 0;
}
