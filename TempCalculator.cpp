//
// Created by drews on 2/5/2021.
//

#include <iostream>
#include "TempCalculator.h"

TempCalculator::TempCalculator() : fahrenheitTemp(0) { }

double TempCalculator::getTempFahr() {
    return fahrenheitTemp;
}

double TempCalculator::getTempCel() {
    return (fahrenheitTemp - 32) * 5.0 / 9.0;
}

void TempCalculator::setTempCel(double newTempCel) {
    fahrenheitTemp = (newTempCel * 9) / 5.0 + 32;
}

void TempCalculator::setTempFahr(double newTempFahr) {
    fahrenheitTemp = newTempFahr;
}
