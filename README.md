# ByteVault

A custom implementation of a Hash Table written from scratch in C.

## Features
- **Custom Hashing:** Uses a character sum modulo array size to generate indexes.
- **Collision Handling:** Resolves hash collisions using linked lists (Separate Chaining).
- **Dynamic Memory:** Uses `malloc` and `strdup` to dynamically allocate memory for keys and nodes.

## How to run

Make sure you have a C compiler installed (like `gcc`).

1. Clone the repository:
   ```bash
   git clone https://github.com/ilyashulga13/ByteVault.git
   ```
2. Compile the code:
   ```bash
   gcc main.c -o bytevault
   ```
3. Run the program:
   ```bash
   ./bytevault
   ```

## Tech Stack
- **Language:** C
- **Libraries:** `stdio.h`, `stdlib.h`, `string.h`

## License
This project is licensed under the MIT License.
