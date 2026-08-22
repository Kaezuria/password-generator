#include <iostream>
#include <string>
#include <random>
#include <algorithm>

int main() {
    const std::string minuscules = "abcdefghijklmnopqrstuvwxyz";
    const std::string majuscules = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const std::string chiffres   = "0123456789";
    const std::string speciaux   = "!@#$%^&*()-_=+[]{};:,.<>?";

    int longueur;
    char choixMaj, choixChiffres, choixSpeciaux;

    std::cout << "=== Generateur de mot de passe ===\n\n";

    std::cout << "Longueur du mot de passe : ";
    std::cin >> longueur;

    if (longueur <= 0) {
        std::cout << "Longueur invalide.\n";
        return 1;
    }

    std::cout << "Inclure des majuscules ? (o/n) : ";
    std::cin >> choixMaj;

    std::cout << "Inclure des chiffres ? (o/n) : ";
    std::cin >> choixChiffres;

    std::cout << "Inclure des caracteres speciaux ? (o/n) : ";
    std::cin >> choixSpeciaux;

    // On construit le jeu de caracteres disponible selon les choix
    std::string jeuCaracteres = minuscules;

    if (choixMaj == 'o' || choixMaj == 'O') {
        jeuCaracteres += majuscules;
    }
    if (choixChiffres == 'o' || choixChiffres == 'O') {
        jeuCaracteres += chiffres;
    }
    if (choixSpeciaux == 'o' || choixSpeciaux == 'O') {
        jeuCaracteres += speciaux;
    }

    // Generateur aleatoire de bonne qualite
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(0, jeuCaracteres.size() - 1);

    std::string motDePasse;
    for (int i = 0; i < longueur; ++i) {
        motDePasse += jeuCaracteres[distrib(gen)];
    }

    std::cout << "\nMot de passe genere : " << motDePasse << "\n";

    return 0;
}