#include "Functions.h"

using namespace std;

int main()
{
    vector<string> vStr = ReadInput(cin);
    if (!vStr.size())
    {
        cout << "\n"; // empty string return empty string
        return 0;
    }
    vector<double> vDbl = ConvertVectorToDoubleFromString(vStr);
    if (!vDbl.size())
    {
        cout << "unable to convert\n"; // passed string or very big value
        return 1;
    }
    MultToMinElement(vDbl);
    PrintVectorOfDouble(vDbl);

//    SortAndPrintVectorOfDouble(vDbl);
}