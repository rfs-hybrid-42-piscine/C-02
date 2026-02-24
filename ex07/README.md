# 🟢 Exercise 07: ft_strupcase

## 📝 Objective
Create a function that transforms every lowercase letter in a string to uppercase.

## 💡 The Logic
This exercise requires modifying a string in place. We iterate through the string and check if the current character falls within the lowercase ASCII range (`'a'` to `'z'`). 

If it does, we mathematically convert it to uppercase. In the ASCII table, the uppercase letters are exactly 32 positions before their lowercase counterparts. So, we subtract `32` (or mathematically `'a' - 'A'`) from the character's value to shift it into the uppercase range.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_strupcase.c`](ft_strupcase.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-02` directory. Pass the `-D EX07` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX07 ../tester.c ft_strupcase.c -o test_ex07
   ./test_ex07
   ```
