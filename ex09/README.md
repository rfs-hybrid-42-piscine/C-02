# 🟢 Exercise 09: ft_strcapitalize

## 📝 Objective
Create a function that capitalizes the first letter of each word and transforms all other letters to lowercase. A word is defined as a string of alphanumeric characters.

## 💡 The Logic
This is a complex parsing exercise. To keep the code clean and strictly Norm-compliant, we use **static helper functions** (`ft_isalnum`, `ft_islower`, `ft_isupper`) to handle the character evaluations.

We iterate through the string. A character should be capitalized IF it is the very first character of the string (`i == 0`), OR if the character immediately preceding it was NOT alphanumeric (`!ft_isalnum(str[i - 1])`). If it meets these conditions and is currently lowercase, we shift it to uppercase. 

Conversely, if it does *not* meet those conditions (meaning it is in the middle of a word) but is uppercase, we must force it to lowercase.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_strcapitalize.c`](ft_strcapitalize.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-02` directory. You must pass the `-D EX09` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX09 ../tester.c ft_strcapitalize.c -o test_ex09
   ./test_ex09
   ```
