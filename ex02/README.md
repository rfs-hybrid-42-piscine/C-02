# 🟢 Exercise 02: ft_str_is_alpha

## 📝 Objective
Create a function that returns 1 if the given string contains only alphabetical characters and 0 if it contains any other character. It should return 1 if the string is empty.

## 💡 The Logic
This exercise introduces ASCII mathematical evaluation.  In C, every character is represented by an integer value.

Instead of writing a massive conditional checking every letter, we can simply check if the character falls within the mathematical range of `'a'` (97) to `'z'` (122) OR `'A'` (65) to `'Z'` (90). If the loop encounters any character that falls outside these two bounds, it immediately returns `0` (false). If the loop completes without issue, it returns `1` (true). 

*Note: As a defensive programming measure, an initial `if (!str)` check ensures that a `NULL` pointer safely returns 1 instead of causing a Segmentation Fault.*

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_str_is_alpha.c`](ft_str_is_alpha.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-02` directory. Pass the `-D EX02` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX02 ../tester.c ft_str_is_alpha.c -o test_ex02
   ./test_ex02
   ```
