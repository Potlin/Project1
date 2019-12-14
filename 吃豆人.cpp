#include <math.h>
#include <stdio.h>

int main() {
    double x, y;
    for (y = 1; y >= -1; y -= 0.05, putchar('\n'))
        for (x = -1; x <= 1; x += 0.025)
            putchar(" *"[
                x * x + y * y < 1 &&                /* disk  */
                    fabs(atan2(y, x)) > 0.5 &&          /* mouth */
                    x * x + pow(y - 0.5, 2) > 0.02]);   /* eye   */
}