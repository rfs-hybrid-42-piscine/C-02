# 🟢 Exercise 10: ft_strlcpy

## 📝 Objective
Reproduce the behavior of the standard C library function `strlcpy`.

## 💡 The Logic
Unlike `strcpy` and `strncpy`, `strlcpy` is designed specifically to prevent buffer overflows. It takes the full size of the destination buffer as a parameter (`size`). 

It copies at most `size - 1` characters from `src` to `dest` and guarantees that the resulting string is null-terminated (as long as `size` is greater than 0). 

Crucially, it always returns the total length of the string it *tried* to create, which is the length of `src`. We first calculate the length of `src`, then run our copying loop up to `size - 1`, append the `'\0'`, and return the length.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_strlcpy.c`](ft_strlcpy.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-02` directory. You must pass the `-D EX10` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX10 ../tester.c ft_strlcpy.c -o test_ex10
   ./test_ex10
   ```
