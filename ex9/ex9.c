#include <stdio.h>

int main(int argc, char *argv[])
{
    int numbers[4] = {0};
    char name[4] = {'K'};

    // print them out raw
    printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2],
        numbers[3]);
    printf("name each: %c %c %c %c\n", name[0],name[1],name[2],name[3]);
    printf("name: %s\n", name);

    // set up the numbers
    numbers[0] = 0;
    numbers[1] = 1;
    numbers[2] = 2;    
    numbers[3] = 3;

    name[0] = 'K';
    name[1] = 'e';
    name[2] = 'v';
    name[3] = '\0';

    printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2],
        numbers[3]);
    printf("name each: %c %c %c %c\n", name[0],name[1],name[2],name[3]);
    printf("name: %s\n", name);

    char *missus = "Zoe";

    printf("missus each: %c %c %c %c\n", missus[0],missus[1],missus[2],missus[3]);
    printf("missus: %s\n", missus);




    return 0;
}
