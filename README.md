# DotFleet

**DotFleet** is a simple terminal-based guessing game written in C++ (C-style).

## 🎮 How to Play

- The game board is an `N x N` grid (default: `N = 4`).
- 3 hidden targets (`X`) are randomly placed.
- Enter a two-digit number to guess a cell (e.g., `23` = row 2, column 3).
- The game ends when all targets are found.

## ⚙️ Change Board Size

Edit the following line in `main.cpp`:

```cpp
#define N 4
```

Recommended value: between **3 and 10**.

## 🛠 Build & Run

### On Linux / macOS / WSL:

```bash
g++ main.cpp -o dotfleet
./dotfleet
```

### On Windows (CMD or PowerShell):

```cmd
g++ main.cpp -o dotfleet.exe
dotfleet
```

> Requires `g++` (e.g., via MinGW or WSL).

---

Enjoy the game! 🎯
