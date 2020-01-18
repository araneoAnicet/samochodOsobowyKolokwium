#include "Przeglad.h"
#include "SamochodOsobowy.h"
#include <iostream>


int main() {
    std::string model;
    std::string marka;
    int rokProdukcji;
    std::string VIN;
    float przebieg;
    std::string instalacjaLPG;

    std::cout << "Wpisz model: ";
    std::cin >> model;

    std::cout << "Wpisz marke: ";
    std::cin >> marka;

    std::cout << "Wpisz rok produkcji: ";
    std::cin >> rokProdukcji;
    
    std::cout << "Wpisz VIN: ";
    std::cin >> VIN;

    std::cout << "Wpisz przebieg: ";
    std::cin >> przebieg;
    
    std::cout << "Wpisz LPG: ";
    std::cin >> instalacjaLPG;
    
    Przeglad myPrzeglad(
        model,
        marka,
        rokProdukcji,
        VIN,
        przebieg,
        instalacjaLPG
    );

    int testHamulcow;
    int testSwiatel;
    int testZawieszenia;
    int testSpalin;
    int testWyciekow;

    std::cout << "Wpisz wartosc testu hamulcow: ";
    std::cin >> testHamulcow;

    std::cout << "Wpisz wartosc testu swiatel: ";
    std::cin >> testSwiatel;

    std::cout << "Wpisz wartosc testu zawieszenia: ";
    std::cin >> testZawieszenia;
    
    std::cout << "Wpisz wartosc testu spalin: ";
    std::cin >> testSpalin;
    
    std::cout << "Wpisz wartosc testu wyciekow: ";
    std::cin >> testWyciekow;
    
    myPrzeglad.setTests(
        testHamulcow,
        testSwiatel,
        testZawieszenia,
        testSpalin,
        testWyciekow
    );

    myPrzeglad.show();
    
    return 0;
}