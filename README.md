*This project has been created as part of the 42 curriculum by maaugust.*

<div align="center">
  <img src="https://raw.githubusercontent.com/rfs-hybrid/42-piscine-artwork/main/assets/covers/cover-c02.png" alt="C 02 Cover" width="100%" />
</div>

<div align="center">
  <h1>💻 C 02: String Manipulation & Memory</h1>
  <p><i>Mastering ASCII math, character arrays, and memory representation.</i></p>
  
  <img src="https://img.shields.io/badge/Language-C-blue" alt="Language badge" />
  <img src="https://img.shields.io/badge/Grade-100%2F100-success" alt="Grade badge" />
  <img src="https://img.shields.io/badge/Norminette-Passing-success" alt="Norminette badge" />
</div>

---

## 💡 Description
**C 02** dives deep into string manipulation. In C, strings are not a dedicated data type; they are simply contiguous arrays of characters terminated by a null byte (`\0`). 

This module challenges you to recreate standard C library functions (like `strcpy` and `strncpy`), evaluate strings using ASCII mathematical ranges, and transform characters. It culminates in advanced memory representation, requiring you to output raw memory addresses and hexadecimal data structures.

---

## 🧠 Exercise Breakdown & Logic

*The following section explains the core concepts required to solve each exercise. It focuses on the fundamental logic of C programming, emphasizing manual memory manipulation and ASCII character values.*

### 🔹 String Copying & Safe Memory
| Exercise | Concept & Logic |
| :--- | :--- |
| **[`ex00: ft_strcpy`](ex00)** | **Basic Copying:** Reproducing the standard `strcpy` function. <br><br>**Logic:** We iterate through the source string (`src`) using a `while` loop, assigning each character to the corresponding index in the destination string (`dest`). Finally, we manually append the `\0` null-terminator to the end of `dest` and return a pointer to it. |
| **[`ex01: ft_strncpy`](ex01)** | **Bounded Copying:** Reproducing `strncpy`. <br><br>**Logic:** We copy exactly `n` bytes from `src` to `dest`. If `src` is shorter than `n`, the remaining bytes in `dest` must be filled with null bytes (`\0`) until `n` is reached. |
| **[`ex10: ft_strlcpy`](ex10)** | **Safe String Copying:** Reproducing `strlcpy`. <br><br>**Logic:** Unlike `strncpy`, `strlcpy` guarantees the destination string is null-terminated (if `size > 0`). It copies at most `size - 1` characters and always returns the total length of the string it tried to create (the length of `src`), making it safer for preventing buffer overflows. |

### 🔍 String Evaluation (ASCII Math)
*Note: For exercises 02 through 06, the subject strictly requires that the functions return `1` if the evaluated string is completely empty.*

| Exercise | Concept & Logic |
| :--- | :--- |
| **[`ex02: ft_str_is_alpha`](ex02)** | **Alphabet Check:** Returns 1 if the string contains only alphabetical characters. <br><br>**Logic:** Iterates through the string, checking if each character falls within the valid ASCII ranges for lowercase (`'a'` to `'z'`) or uppercase (`'A'` to `'Z'`). If any character falls outside these bounds, it returns 0. |
| **[`ex03: ft_str_is_numeric`](ex03)** | **Digit Check:** Returns 1 if the string contains only digits. <br><br>**Logic:** Checks if every character is within the ASCII range of `'0'` to `'9'`. |
| **[`ex04: ft_str_is_lowercase`](ex04)** | **Lowercase Check:** Returns 1 if the string contains only lowercase letters. <br><br>**Logic:** Checks if every character is strictly between `'a'` and `'z'`. |
| **[`ex05: ft_str_is_uppercase`](ex05)** | **Uppercase Check:** Returns 1 if the string contains only uppercase letters. <br><br>**Logic:** Checks if every character is strictly between `'A'` and `'Z'`. |
| **[`ex06: ft_str_is_printable`](ex06)** | **Printable Check:** Returns 1 if the string contains only printable characters. <br><br>**Logic:** The ASCII table defines printable characters as ranging from space (ASCII `32`) to tilde `~` (ASCII `126`). Any character outside this range (like tabs or newlines) returns 0. |

### 🔄 String Transformation
| Exercise | Concept & Logic |
| :--- | :--- |
| **[`ex07: ft_strupcase`](ex07)** | **To Uppercase:** Converts all lowercase letters to uppercase. <br><br>**Logic:** If a character falls between `'a'` and `'z'`, we subtract `32` from its ASCII value to convert it to its uppercase equivalent. |
| **[`ex08: ft_strlowcase`](ex08)** | **To Lowercase:** Converts all uppercase letters to lowercase. <br><br>**Logic:** If a character falls between `'A'` and `'Z'`, we add `32` to its ASCII value. |
| **[`ex09: ft_strcapitalize`](ex09)** | **Title Case:** Capitalizes the first letter of every word. <br><br>**Logic:** A "word" is defined as any sequence of alphanumeric characters. We evaluate characters using custom static helper functions (`ft_isalnum`, `ft_islower`, `ft_isupper`). If a letter is at the very beginning of the string (`i == 0`) or immediately follows a non-alphanumeric character, we mathematically shift it to uppercase. Otherwise, we force it to lowercase. |

### 🚀 Advanced Output & Memory Display
| Exercise | Concept & Logic |
| :--- | :--- |
| **[`ex11: ft_putstr_non_printable`](ex11)** | **Hexadecimal Escape:** Prints a string, converting non-printable characters into hex. <br><br>**Logic:** We evaluate each character. If it is printable, we write it normally. If it is non-printable (e.g., `\n`), we print a backslash `\` followed by its two-digit hexadecimal representation (e.g., `\0a`). Includes a strict cast to `(unsigned char)` before performing math to safely handle extended ASCII characters and prevent sign-extension bugs. |
| **[`ex12: ft_print_memory`](ex12)** | **The Hex Dump:** Recreating a classic memory inspection tool. <br><br>**Logic:** This prints memory in 16-character chunks per line. It requires three columns: the 16-character hexadecimal memory address, the raw hexadecimal content of the bytes (padded with spaces), and the printable string representation (with non-printables replaced by dots `.`). To survive the strict 42 Norminette 25-line limit, `while (++i < limit)` pre-increment loops are heavily utilized. The pointer is also explicitly cast to an `(unsigned char *)` to prevent negative hex evaluation bugs. |

---

## 🛠️ Instructions

### 🧪 Compilation & Testing (The Master Test)
Unlike Shell scripts, C programs must be compiled before they can be executed. Furthermore, these exercises strictly ask for functions, not complete programs. 

To make testing incredibly easy while avoiding "undefined reference" linker errors, the **[`tester.c`](tester.c)** file in the root directory uses **C Preprocessor Macros** (`#ifdef`). This allows you to selectively compile and test only the exercises you want.

1. **Clone the repository:**
   ```bash
   git clone <your_repository_link>
   cd 42-Piscine/C-02
   ```

2. **Test a Single Exercise:**
   Pass the corresponding `-D EX**` flag to activate that specific test block inside **[`tester.c`](tester.c)**.
   ```bash
   # Example for ex00:
   cc -Wall -Wextra -Werror -D EX00 tester.c ex00/ft_strcpy.c -o test_ex00
   ./test_ex00
   ```

3. **Test Multiple Exercises Together:**
   You can chain multiple `-D` flags to test several functions at once, provided you include all their `.c` files in the command.
   ```bash
   # Example for ex04 and ex05:
   cc -Wall -Wextra -Werror -D EX04 -D EX05 tester.c ex04/ft_str_is_lowercase.c ex05/ft_str_is_uppercase.c -o test_multiple
   ./test_multiple
   ```

4. **Test ALL Exercises at Once:**
   By passing the `-D TEST_ALL` master flag, you can activate the entire testing suite in one go!
   ```bash
   cc -Wall -Wextra -Werror -D TEST_ALL tester.c ex00/ft_strcpy.c ex01/ft_strncpy.c ex02/ft_str_is_alpha.c ex03/ft_str_is_numeric.c ex04/ft_str_is_lowercase.c ex05/ft_str_is_uppercase.c ex06/ft_str_is_printable.c ex07/ft_strupcase.c ex08/ft_strlowcase.c ex09/ft_strcapitalize.c ex10/ft_strlcpy.c ex11/ft_putstr_non_printable.c ex12/ft_print_memory.c -o test_all
   ./test_all
   ```

> **⚠️ WARNING for 42 Students:** Do not push **[`tester.c`](tester.c)** or any executable files to your final Moulinette repository! They are strictly for local testing purposes. Submitting unauthorized files will result in a 0.

### 🚨 The Norm
Moulinette relies on a program called `norminette` to check if your files comply with the Norm. Every single `.c` and `.h` file must pass. 

**The 42 Header:**
Before writing any code, every file must start with the standard 42 header. `norminette` will automatically fail any file missing this specific signature.
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 20:04:47 by maaugust          #+#    #+#             */
/*   Updated: 2025/02/26 18:16:53 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
```

Run the following command before pushing:
```bash
norminette -R CheckForbiddenSourceHeader <file.c>
```

---

## 📚 Resources & References

* `man ascii` - The ASCII character table. Absolutely essential for this module.
* `man 3 strcpy` / `man 3 strncpy` / `man 3 strlcpy` - Manuals for standard string copying.
* [42 Norm V4](https://cdn.intra.42.fr/pdf/pdf/96987/en.norm.pdf) - The strict coding standard for 42 C projects.
* [Official 42 Norminette Repository](https://github.com/42School/norminette) - The open-source linter enforcing the strict 42 coding standard.

### 🤖 AI Usage Guidelines
* **Code:** No AI-generated code was used to solve these exercises. All C functions were built manually to strictly comply with the 42 Norm and deeply understand manual memory manipulation, enforcing the concept that learning is about developing the ability to find an answer, not just getting one directly.
* **Documentation:** AI tools were utilized to structure this `README.md` and format the logic breakdowns to create a clean, accessible educational resource for fellow 42 students.
