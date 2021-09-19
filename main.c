#include <stdio.h>

long reverse(long n);

int main(void)
{
    // unsigned integer min
    unsigned int x = 0;
    printf("%u\n", x);
    printf("%u\n", x - 1);

    // signed integer max
    signed int y = 2147483647;
    printf("%d\n", y);
    printf("%d\n", y + 1);

    // strings well kinda
    char cx[85] = "According to all known laws of aviation, there is no way a bee should be able to fly.";
    printf("%s\n", cx);
    char *cy = "According to all known laws of aviation, there is no way a bee should be able to fly .";
    printf("%s\n", cy); // pointer version

    // pointers and stuff
    int a = 12;
    int *b = &a;
    printf("%p\n", b);  // memory address of a (?)
    printf("%p\n", &b); // memory address of b which holds the memory address of a (?)
    printf("%d\n", *b); // get what b points to (dereference) (?)

    // Project Euler Problem 4
    long largest_palindrome = 0;

    // 100 and 1000 come from bounds of 3 digit number
    for (int i = 100; i < 1000; i++)
    {
        for (int j = 100; j < 1000; j++)
        {
            long n = (long)i * j;
            long reversed = reverse(n);

            if (n == reversed && largest_palindrome < n)
            {
                largest_palindrome = n;
            }
        }
    }

    printf("%ld\n", largest_palindrome);
}

// reverse digits of number
long reverse(long n)
{
    long r = 0;

    while (n != 0)
    {
        r *= 10;
        r += n % 10;
        n /= 10;
    }

    return r;
}