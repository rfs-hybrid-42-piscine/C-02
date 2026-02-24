# 🟢 Exercise 08: ft_strlowcase

## 📝 Objective
Create a function that transforms every uppercase letter in a string to lowercase.

## 💡 The Logic
This is the exact inverse of `ex07`. We iterate through the string, target any characters falling in the uppercase ASCII range (`'A'` to `'Z'`), and add `32` (or `'a' - 'A'`) to shift them into the lowercase range.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_strlowcase.c`](ft_strlowcase.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-02` directory. You must pass the `-D EX08` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX08 ../tester.c ft_strlowcase.c -o test_ex08
   ./test_ex08
   ```
