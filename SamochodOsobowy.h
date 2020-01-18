#pragma once
#include <string>
#include <iostream>
#include <iomanip>


class SamochodOsobowy {
private:
    std::string model;
    std::string marka;
    int rokProdukcji;
    std::string VIN;
    float przebieg;
    std::string instalacjaLPG;
public:
    SamochodOsobowy();
    SamochodOsobowy(
        std::string model,
        std::string marka,
        int rokProdukcji,
        std::string VIN,
        float przebieg,
        std::string instalacjaLPG
    );
    void show();
    void setPrzebieg(float przebieg);
    void setInstalacjaLPG(std::string instalacjaLPG);
};