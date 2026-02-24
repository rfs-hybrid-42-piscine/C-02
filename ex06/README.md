# 🟢 Exercise 06: ft_str_is_printable

## 📝 Objective
Create a function that returns 1 if the given string contains only printable characters and 0 if it contains any other character. It should return 1 if the string is empty.

## 💡 The Logic
"Printable characters" are any characters that have a visible output on a standard terminal. 

If you look at an ASCII table, the first 31 characters (like `\n` for newline, or `\t` for tab) are invisible control characters. The printable characters begin at ASCII `32` (the Space character, `' '`) and end at ASCII `126` (the Tilde character, `'~'`). Any character outside of this specific range will cause the function to return `0`.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_str_is_printable.c`](ft_str_is_printable.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-01` directory. Pass the `-D EX06` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX06 ../tester.c ft_str_is_printable.c -o test_ex06
   ./test_ex06
   ```
