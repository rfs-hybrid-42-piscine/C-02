# 🟢 Exercise 00: ft_strcpy

## 📝 Objective
Create a function that reproduces the behavior of the standard C library function `strcpy`.

## 💡 The Logic
The goal of `strcpy` is to copy a string from a source (`src`) to a destination (`dest`). 

Because C strings are just arrays of characters, we use a `while` loop to iterate through `src` character by character, assigning each one to the exact same index in `dest`. Once the loop finishes (meaning we hit the end of the `src` string), we must manually append the null-terminating byte (`'\0'`) to the end of `dest` to ensure it is a valid, readable C string. Finally, the function returns a pointer to the destination string.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_strcpy.c`](ft_strcpy.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-02` directory. You must pass the `-D EX00` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX00 ../tester.c ft_strcpy.c -o test_ex00
   ./test_ex00
   ```
