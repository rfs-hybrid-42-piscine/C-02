# 🟢 Exercise 04: ft_str_is_lowercase

## 📝 Objective
Create a function that returns 1 if the given string contains only lowercase alphabetical characters and 0 if it contains any other character. It should return 1 if the string is empty.

## 💡 The Logic
Again, we are evaluating ASCII boundaries. We iterate through the string, returning `0` if any character is mathematically less than `'a'` or mathematically greater than `'z'`.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_str_is_lowercase.c`](ft_str_is_lowercase.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-02` directory. Pass the `-D EX04` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX04 ../tester.c ft_str_is_lowercase.c -o test_ex04
   ./test_ex04
   ```
