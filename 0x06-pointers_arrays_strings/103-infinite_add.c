#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    // Determine the maximum length of the result
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int max_len = len1 > len2 ? len1 : len2;
    int carry = 0; // Keep track of any carry over from addition

    // Make sure the result buffer is large enough to hold the result
    if (max_len + 1 > size_r)
    {
        return 0;
    }

    // Initialize the result buffer with null characters
    memset(r, '\0', size_r);

    // Iterate over the digits of each number from least significant to most significant
    for (int i = 0; i < max_len; i++)
    {
        // Get the current digits from each number
        int n1_digit = i < len1 ? n1[len1 - 1 - i] - '0' : 0;
        int n2_digit = i < len2 ? n2[len2 - 1 - i] - '0' : 0;

        // Perform the addition and take into account the carry over
        int sum = n1_digit + n2_digit + carry;
        carry = sum / 10;
        int result_digit = sum % 10;

        // Add the result digit to the result buffer
        r[max_len - 1 - i] = result_digit + '0';
    }

    // If there is a remaining carry over, add it to the result buffer
    if (carry > 0)
    {
        r[0] = carry + '0';
    }

    // Return a pointer to the result buffer
    return r;
}
