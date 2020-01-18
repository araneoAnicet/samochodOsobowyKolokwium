#pragma once
#include "SamochodOsobowy.h"
#include <iomanip>
#include <map>


class Przeglad: public SamochodOsobowy {
private:
    int testHamulcow;
    int testSwiatel;
    int testZawieszenia;
    int testSpalin;
    int testWyciekow;
public:
    Przeglad();
    Przeglad(
        std::string model,
        std::string marka,
        int rokProdukcji,
        std::string VIN,
        float przebieg,
        std::string instalacjaLPG
        );
    void setTests(
        int testHamulcow,
        int testSwiatel,
        int testZawieszenia,
        int testSpalin,
        int testWyciekow
        );
    void show();

};