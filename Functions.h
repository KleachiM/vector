#ifndef VECTOR_FUNCTIONS_H
#define VECTOR_FUNCTIONS_H
#include <iostream>
#include <vector>

std::vector<std::string> ReadInput(std::istream& inpStream);

std::vector<double> ConvertVectorToDoubleFromString(std::vector<std::string>& vectorOfString);

void MultToMinElement(std::vector<double>& vectorOfDouble);

void PrintVectorOfDouble(const std::vector<double>& vect);

#endif //VECTOR_FUNCTIONS_H
