#include "Functions.h"

using namespace std;

int main()
{
    vector<string> vStr = ReadInput(cin);
    if (!vStr.size())
    {
        cout << endl; // empty string return empty string
        return EXIT_SUCCESS;
    }
    vector<double> vDbl = ConvertVectorToDoubleFromString(vStr);
    if (vDbl.size() != vStr.size())
    {
        cout << "unable to convert" << endl; // passed string or very big value
        return EXIT_FAILURE;
    }
    MultToMinElement(vDbl);
    PrintVectorOfDouble(vDbl);
    cout << endl;
    SortAndPrintVectorOfDouble(vDbl);

    return EXIT_SUCCESS;
}