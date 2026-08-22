#include <iostream>
#include <string>
#include <random>
#include <algorithm>

int main() {
    const std::string lowercase = "abcdefghijklmnopqrstuvwxyz";
    const std::string uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const std::string digits    = "0123456789";
    const std::string special   = "!@#$%^&*()-_=+[]{};:,.<>?";

    int length;
    char includeUpper, includeDigits, includeSpecial;

    std::cout << "=== Password Generator ===\n\n";

    std::cout << "Password length: ";
    std::cin >> length;

    if (length <= 0) {
        std::cout << "Invalid length.\n";
        return 1;
    }

    std::cout << "Include uppercase letters? (y/n): ";
    std::cin >> includeUpper;

    std::cout << "Include digits? (y/n): ";
    std::cin >> includeDigits;

    std::cout << "Include special characters? (y/n): ";
    std::cin >> includeSpecial;

    // Build the character pool based on the user's choices
    std::string charPool = lowercase;

    if (includeUpper == 'y' || includeUpper == 'Y') {
        charPool += uppercase;
    }
    if (includeDigits == 'y' || includeDigits == 'Y') {
        charPool += digits;
    }
    if (includeSpecial == 'y' || includeSpecial == 'Y') {
        charPool += special;
    }

    // High-quality random generator
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(0, charPool.size() - 1);

    std::string password;
    for (int i = 0; i < length; ++i) {
        password += charPool[distrib(gen)];
    }

    std::cout << "\nGenerated password: " << password << "\n";

    return 0;
}