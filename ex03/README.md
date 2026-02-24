# 🟢 Exercise 03: ft_str_is_numeric

## 📝 Objective
Create a function that returns 1 if the given string contains only digits and 0 if it contains any other character. It should return 1 if the string is empty.

## 💡 The Logic
This follows the exact same logic as `ex02`, but the ASCII boundaries have changed. We iterate through the string and verify that every single character falls within the strict boundary of `'0'` (ASCII 48) and `'9'` (ASCII 57).

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_str_is_numeric.c`](ft_str_is_numeric.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-02` directory. Pass the `-D EX03` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX03 ../tester.c ft_str_is_numeric.c -o test_ex03
   ./test_ex03
   ```
