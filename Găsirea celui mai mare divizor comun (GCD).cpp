// Găsirea celui mai mare divizor comun (GCD).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int numar1, numar2;

    // Citim cele două numere de la utilizator
    std::cout << "Introduceti primul numar: ";
    std::cin >> numar1;
    std::cout << "Introduceti al doilea numar: ";
    std::cin >> numar2;

    // Calculăm GCD folosind algoritmul lui Euclid
    int rezultat = gcd(numar1, numar2);

    // Afișăm rezultatul
    std::cout << "Cel mai mare divizor comun al lui " << numar1 << " si " << numar2 << " este: " << rezultat << std::endl;

    return 0;
}
