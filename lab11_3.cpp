#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
    int count = 0;
    float sum = 0, standsum = 0;
    string textline;
    ifstream source("score.txt");
    while(getline(source, textline)){
        sum += atof(textline.c_str());
        standsum += atof(textline.c_str())*atof(textline.c_str());
        count++;
    }

    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << sum/count << endl;
    cout << "Standard deviation = " << sqrt((standsum/count)-((sum/count)*(sum/count)));
}