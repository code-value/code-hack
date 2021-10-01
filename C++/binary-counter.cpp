#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int i, d;
    int binary, decimal;
    
    for(i=0; i<=100; i++) {
      d = 0; binary = 0;
      decimal = i;
      while(decimal) {
        binary += (decimal%2) * 
                   pow(10, d++);
        decimal = decimal/2;
      }
    cout<<binary<<"\n";
    }
    
    return 0;
}
