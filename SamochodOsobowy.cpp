#include "SamochodOsobowy.h"

SamochodOsobowy::SamochodOsobowy() {
    std::cout << "Default constructor" << std::endl;
}

SamochodOsobowy::SamochodOsobowy(
    std::string model,
    std::string marka,
    int rokProdukcji,
    std::string VIN,
    float przebieg,
    std::string instalacjaLPG
) {
    this->marka = marka;
    this->model = model;
    this->rokProdukcji = rokProdukcji;
    this->VIN = VIN;
    this->przebieg = przebieg;
    this->instalacjaLPG = instalacjaLPG;
}

void SamochodOsobowy::setInstalacjaLPG(std::string instalacjaLPG) {
    this->instalacjaLPG = instalacjaLPG;
}

void SamochodOsobowy::setPrzebieg(float przebieg) {
    this->przebieg = przebieg;
}

void SamochodOsobowy::show() {
    const int setWValue = 25;
    std::cout << std::setfill(' ');
    std::cout << std::setw(setWValue) << "Model";
    std::cout << std::setw(setWValue) << "Marka";
    std::cout << std::setw(setWValue) << "Rok Produkcji";
    std::cout << std::setw(setWValue) << "VIN";
    std::cout << std::setw(setWValue) << "Przebieg";
    std::cout << std::setw(setWValue) << "LPG";
    std::cout << std::endl;

    std::cout << std::setw(setWValue) << this->model;
    std::cout << std::setw(setWValue) << this->marka;
    std::cout << std::setw(setWValue) << this->rokProdukcji;
    std::cout << std::setw(setWValue) << this->VIN;
    std::cout << std::setw(setWValue) << this->przebieg;
    std::cout << std::setw(setWValue) << this->instalacjaLPG;
    std::cout << std::endl;
}