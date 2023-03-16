#include "Functions.h"

std::vector<std::string> ReadInput(std::istream& inpStream)
{
    std::vector<std::string> v;
    copy(std::istream_iterator<std::string>(inpStream), std::istream_iterator<std::string>(), inserter(v, v.end()));
    return v;
}

std::vector<double> ConvertVectorToDoubleFromString(std::vector<std::string>& vectorOfString)
{
    std::vector<double> vectorOfDouble;
    for (const auto& elem: vectorOfString)
    {
        size_t pos{};
        try
        {
            double value {stod(elem, &pos)};
            if (elem.size() != pos) break;
            vectorOfDouble.push_back(value);
        }
        catch (const std::invalid_argument&)
        {
            break; // unable to convert string
        }
        catch (const std::out_of_range&)
        {
            break; // unable to convert very big number
        }

    }
    if (vectorOfDouble.size() != vectorOfString.size()) vectorOfDouble.clear();

    return vectorOfDouble;
}

void MultToMinElement(std::vector<double>& vecOfDouble)
{
    double minElem = *std::min_element(vecOfDouble.begin(), vecOfDouble.end());
    for (auto& item: vecOfDouble) item *= minElem;
}

void PrintVectorOfDouble(const std::vector<double> &vect) {
    copy(vect.begin(), vect.end(), std::ostream_iterator<double>(std::cout, " "));
}

void SortAndPrintVectorOfDouble(std::vector<double>& vect)
{
    std::sort(vect.begin(), vect.end(), std::less<double>());
    copy(vect.begin(), vect.end(), std::ostream_iterator<double>(std::cout, " "));
}
