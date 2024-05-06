#include <fstream>
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

int main() {
    
    std::ifstream ifile("coords.txt", std::ios::in);
    if (ifile.is_open())
    {
        string cordinates;
        while (ifile)
        {
            
            getline(ifile, cordinates); 
            
            stringstream ss(cordinates);
            double lat, lon;
            ss.ignore(1);  // skip '('
            ss >> lat;
            ss.ignore(2);  // skip ", "
            ss >> lon;
            
            if ( (lat >= 50)&&(lat <= 80)&&(lon >= 20)&&(lon <= 45) )
            {
                cout << lat << ", " << lon << endl;
            }
        }

    }

    return 0;
}