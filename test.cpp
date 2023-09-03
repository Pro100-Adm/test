#include <iostream>
#include <fstream>
#include <time.h>
using namespace std;

int GetRandomNumber(int min, int max)
{
  int num = min + rand() % (max - min + 1);
  return num;
}

int main() {
    srand(time(NULL));
    ofstream out("excel.csv");
    double x[200] = {};
    out << "\n";
    for(int i =0; i<(sizeof(x)/sizeof(*x)); i++){
        x[i] = 2 * ((rand()/(static_cast<double>(RAND_MAX))) - 0.5);
        out << x[i] << "\n";
        printf("%f\n", x[i]);
    }
    out.close();
