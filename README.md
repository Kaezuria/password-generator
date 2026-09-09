# Password Generator (C++)

A small command-line password generator written in C++. You choose the length and which character types to include (uppercase, digits, special characters), and it generates a random password.

## Features

- Customizable length
- Lowercase letters included by default
- Optional: uppercase letters, digits, special characters
- High-quality random generation (`std::mt19937`)

## Requirements

- A C++ compiler supporting C++17 (`g++` or `clang++`)

## Installation

Clone the repository:

```bash
git clone https://github.com/Kaezuria/password-generator.git
cd password-generator
```

## Build

```bash
g++ -std=c++17 password_generator.cpp -o password_generator
```

On Termux (Android), use `clang++` instead:

```bash
pkg install clang
clang++ -std=c++17 password_generator.cpp -o password_generator
```

## Usage

```bash
./password_generator
```

The program will then ask you:

```
Password length: 16
Include uppercase letters? (y/n): y
Include digits? (y/n): y
Include special characters? (y/n): y

Generated password: Xk9#mPq2$vLwT8@z
```

## Author

Created by **Kaezuria**

## License

Free to use, modify, and distribute.
