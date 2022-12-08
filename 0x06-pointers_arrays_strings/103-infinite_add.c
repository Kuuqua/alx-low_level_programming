#include "main.h"
#include <stdio.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r) {
  // Initialize the result string with all zeros
  for (int i = 0; i < size_r; i++) {
    r[i] = '0';
  }

  // Compute the length of n1 and n2
  int n1_len = strlen(n1);
  int n2_len = strlen(n2);

  // Compute the result by adding the digits of n1 and n2, one by one, starting from the least significant digit
  int carry = 0;
  int i = 0;
  while (i < n1_len || i < n2_len || carry) {
    int digit1 = i < n1_len ? n1[n1_len - 1 - i] - '0' : 0;
    int digit2 = i < n2_len ? n2[n2_len - 1 - i] - '0' : 0;
    int sum = digit1 + digit2 + carry;
    r[size_r - 1 - i] = (sum % 10) + '0';
    carry = sum / 10;
    i++;
  }

  // Check if the result can fit in the result buffer
  if (i > size_r - 1) {
    return 0;
  }

  // Return a pointer to the result
  return r;
}
