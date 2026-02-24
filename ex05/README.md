# 🟢 Exercise 05: ft_str_is_uppercase

## 📝 Objective
Create a function that returns 1 if the given string contains only uppercase alphabetical characters and 0 if it contains any other character. It should return 1 if the string is empty.

## 💡 The Logic
Identical to the previous functions, but restricting the valid ASCII evaluation block to characters that fall exactly between `'A'` and `'Z'`.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_str_is_uppercase.c`](ft_str_is_uppercase.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-02` directory. Pass the `-D EX05` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX05 ../tester.c ft_str_is_uppercase.c -o test_ex05
   ./test_ex05
   ```
