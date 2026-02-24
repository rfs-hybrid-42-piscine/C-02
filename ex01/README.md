# 🟢 Exercise 01: ft_strncpy

## 📝 Objective
Create a function that reproduces the behavior of the standard C library function `strncpy`.

## 💡 The Logic
Unlike `strcpy`, `strncpy` copies exactly `n` bytes from `src` to `dest`. 

We use a loop that runs while `i < n` and `src[i]` is not the null-terminator. However, `strncpy` has a very specific rule: if the length of `src` is *less* than `n`, the remainder of the `dest` array must be filled with null bytes (`'\0'`) until a total of `n` bytes have been written. We handle this by adding a second `while` loop that continues to write `'\0'` to `dest` if the first loop finishes before reaching `n`.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_strncpy.c`](ft_strncpy.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-02` directory. Pass the `-D EX01` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX01 ../tester.c ft_strncpy.c -o test_ex01
   ./test_ex01
   ```
