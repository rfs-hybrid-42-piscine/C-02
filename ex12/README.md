# 🟢 Exercise 12: ft_print_memory

## 📝 Objective
Create a function that displays a given memory area on screen. It must print 16 bytes per line, divided into three specific columns: the memory address in hex, the raw data in hex (padded with spaces), and the printable string characters.

## 💡 The Logic

This is the final boss of the C 02 module. It requires incredibly strict formatting and pushes against the 42 Norminette's 25-line limit per function.

1. **The Main Loop:** We iterate through the memory in chunks of 16 bytes. If the remaining memory is less than 16, the `chunk_size` adjusts accordingly.
2. **The Address (Column 1):** We cast the pointer to an `unsigned long` and use modulo math against a base-16 string to print the 16-character address.
3. **The Data & Printables (Columns 2 & 3):** We pass the memory chunk to a helper function, casting it as an `(unsigned char *)` to prevent sign-extension bugs. We loop through the 16 bytes, printing their hex values (adding spaces every 2 bytes). Finally, we print the visible characters, swapping any non-printable ones with a dot (`.`).

*Norm Trick:* To survive the 25-line limit, the `while (++i < 16)` pre-increment trick is heavily utilized to condense loop setups!

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_print_memory.c`](ft_print_memory.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-02` directory. You must pass the `-D EX12` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX12 ../tester.c ft_print_memory.c -o test_ex12
   ./test_ex12
   ```
