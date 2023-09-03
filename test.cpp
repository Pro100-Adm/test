#include <iostream>
using namespace std;

int main() {
    float x[1000] = {};
    for(int i =0; i<1000; i++){
        x[i] = 2 * ((rand()/(static_cast<double>(RAND_MAX))) - 0.5);
        printf("x = %f", x[i]);
    }
}
