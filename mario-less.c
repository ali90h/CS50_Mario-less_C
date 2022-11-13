#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get input height
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    // Use Big Loop
    for (int i = 0; i < n; i++)
    {
        // Use Second Loop
        for (int j = 0; j < n; j++)
        {
            if (i + j < n - 1)
            {
                printf(" ");
            }

            else
            {
                printf("#");
            }

        }
        printf("\n");
    }
}
