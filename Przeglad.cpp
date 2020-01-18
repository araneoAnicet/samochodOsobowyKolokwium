#include "Przeglad.h"

Przeglad::Przeglad() {
    SamochodOsobowy();
    this->testHamulcow = 0;
    this->testSpalin = 0;
    this->testSwiatel = 0;
    this->testWyciekow = 0;
    this->testZawieszenia = 0;
}

Przeglad::Przeglad(
    std::string model,
    std::string marka,
    int rokProdukcji,
    std::string VIN,
    float przebieg,
    std::string instalacjaLPG
) {
    this->testHamulcow = 100;
    this->testSpalin = 100;
    this->testSwiatel = 100;
    this->testWyciekow = 100;
    this->testZawieszenia = 100;
    SamochodOsobowy(
        model,
        marka,
        rokProdukcji,
        VIN,
        przebieg,
        instalacjaLPG
    );
}

void Przeglad::setTests(
    int testHamulcow,
    int testSwiatel,
    int testZawieszenia,
    int testSpalin,
    int testWyciekow
) {
    this->testHamulcow = testHamulcow;
    this->testSwiatel = testSwiatel;
    this->testZawieszenia = testZawieszenia;
    this->testSpalin = testSpalin;
    this->testWyciekow = testWyciekow;
}

void Przeglad::show() {
    // I've never hated functions as much as I hate this...
    int setWValue = 25;
    std::cout << std::setfill(' ');
    std::cout << std::setw(setWValue) << "Test Hamulcow";
    std::cout << std::setw(setWValue) << "Test Spalin";
    std::cout << std::setw(setWValue) << "Test Swiatel";
    std::cout << std::setw(setWValue) << "Test Wyciekow";
    std::cout << std::setw(setWValue) << "Test Zawieszenia";
    std::cout << std::endl;

    std::cout << std::setw(setWValue) << this->testHamulcow;
    std::cout << std::setw(setWValue) << this->testSpalin;
    std::cout << std::setw(setWValue) << this->testSwiatel;
    std::cout << std::setw(setWValue) << this->testWyciekow;
    std::cout << std::setw(setWValue) << this->testZawieszenia;
    std::cout << std::endl;

    bool isBadResult = false;

    if (this->testHamulcow > 90) {
        std::cout << std::setw(setWValue) << "pozytywny";
    } else {
        std::cout << std::setw(setWValue) << "negatywny";
        isBadResult = true;
    }

    if (this->testSwiatel == 100) {
        std::cout << std::setw(setWValue) << "pozytywny";
    } else {
        std::cout << std::setw(setWValue) << "negatywny";
        isBadResult = true;
    }

    if (this->testZawieszenia > 65) {
        std::cout << std::setw(setWValue) << "pozytywny";
    } else {
        std::cout << std::setw(setWValue) << "negatywny";
        isBadResult = true;
    }

    if (this->testSpalin < 30) {
        std::cout << std::setw(setWValue) << "pozytywny";
    } else {
        std::cout << std::setw(setWValue) << "negatywny";
        isBadResult = true;
    }

    if (this->testWyciekow > 99) {
        std::cout << std::setw(setWValue) << "pozytywny";
    } else {
        std::cout << std::setw(setWValue) << "negatywny";
        isBadResult = true;
    }

    std::cout << std::endl << std::endl;
    if (isBadResult) {
        std::cout << "Wynik przegladu negatywny" << std::endl;
    } else {
        std::cout << "Wynik przegladu pozytywny" << std::endl;
    }
}