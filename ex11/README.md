# 🟢 Exercise 11: ft_putstr_non_printable

## 📝 Objective
Create a function that displays a string on screen. If the string contains non-printable characters, they must be displayed as lowercase hexadecimal values preceded by a backslash (e.g., a newline becomes `\0a`).

## 💡 The Logic
We iterate through the string, evaluating each character. If it is printable (between ASCII `32` and `126`), we print it normally using `write`.

If it falls outside that range, we first print a `\`. Then, we pass the character to a helper function that performs base-16 math. By dividing the character's ASCII value by 16 and finding the modulo of 16, we map the results to a hardcoded hexadecimal string (`"0123456789abcdef"`) to print its exact two-digit hex equivalent.

*Note: The character is safely cast to an `(unsigned char)` before math is performed to prevent negative-value errors with extended ASCII characters.*

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_putstr_non_printable.c`](ft_putstr_non_printable.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-02` directory. You must pass the `-D EX11` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX11 ../tester.c ft_putstr_non_printable.c -o test_ex11
   ./test_ex11
   ```
