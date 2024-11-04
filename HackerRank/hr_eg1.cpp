//Print int 3, 
//followed by long 12345678912345,
//followed by char a, 
//followed by float 334.230,
//followed by double 14049.304930000.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int i;
    long l;
    char c;
    float f;
    double d;
    
    std::cin >> i;
    std::cin >> l;
    std::cin >> c;
    std::cin >> f;
    std::cin >> d;

    printf("%d\n", i); 
    printf("%ld\n", l);
    printf("%c\n", c);
    printf("%f\n", f);
    printf("%lf\n", d);


    return 0;
}
