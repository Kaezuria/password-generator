# Générateur de mot de passe (C++)

Un petit générateur de mot de passe en ligne de commande, écrit en C++. Tu choisis la longueur et les types de caractères à inclure (majuscules, chiffres, caractères spéciaux), et il génère un mot de passe aléatoire.

## Fonctionnalités

- Longueur personnalisable
- Minuscules incluses par défaut
- Choix d'inclure ou non : majuscules, chiffres, caractères spéciaux
- Génération aléatoire de bonne qualité (`std::mt19937`)

## Prérequis

- Un compilateur C++ supportant C++17 (`g++` ou `clang++`)

## Compilation

```bash
g++ -std=c++17 generateur_mdp.cpp -o generateur_mdp
```

Sur Termux (Android), remplace `g++` par `clang++` :

```bash
pkg install clang
clang++ -std=c++17 generateur_mdp.cpp -o generateur_mdp
```

## Utilisation

```bash
./generateur_mdp
```

Le programme te demande ensuite :

```
Longueur du mot de passe : 16
Inclure des majuscules ? (o/n) : o
Inclure des chiffres ? (o/n) : o
Inclure des caracteres speciaux ? (o/n) : o

Mot de passe genere : Xk9#mPq2$vLwT8@z
```

## Auteur

Créé par **SyntaxCrash**

## Licence

Libre d'utilisation, modification et distribution.
