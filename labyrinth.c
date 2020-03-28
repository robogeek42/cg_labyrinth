#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

typedef struct SearchNodeDEF {
    int x;
    int y;
    int d; // distance from start
} SearchNode;

int main()
{
    // number of rows.
    int R;
    // number of columns.
    int C;
    // number of rounds between the time the alarm countdown is activated and the time the alarm goes off.
    int A;
    scanf("%d%d%d", &R, &C, &A);

    // game loop
    while (1) {
        // row where Kirk is located.
        int KR;
        // column where Kirk is located.
        int KC;
        scanf("%d%d", &KR, &KC);
        for (int i = 0; i < R; i++) {
            // C of the characters in '#.TC?' (i.e. one line of the ASCII maze).
            char ROW[C + 1];
            scanf("%s", ROW);
        }

        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");

        printf("RIGHT\n"); // Kirk's next move (UP DOWN LEFT or RIGHT).
    }

    return 0;
}