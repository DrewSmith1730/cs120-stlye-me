//
// Created by drews on 2/5/2021.
//

#ifndef STYLE_ME_TEMPCALCULATOR_H
#define STYLE_ME_TEMPCALCULATOR_H

/*
 * This program contains:
 * Temperature Calculator class
 *
 * TODO: make the class
 * TODO: add comments for each part of the class
 */

class TempCalculator{
private:
    double fahrenheitTemp;

public:
    // Default Constructor
    TempCalculator();

    // Getters
    double getTempFahr();
    double getTempCel();

    // Setters
    void setTempFahr(double newTempFahr);
    void setTempCel(double newTempCel);

};

#endif //STYLE_ME_TEMPCALCULATOR_H
