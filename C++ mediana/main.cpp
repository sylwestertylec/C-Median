//
//  main.cpp
//  C++ mediana
//
//  Created by Sylwester Tylec on 14/06/2022.
//

#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

double mediana(double data[]);
int main() {
    auto start = chrono::steady_clock::now();
    double data[]={1,2,3,4,5,6,7,8,9,10};
    sort(data, data+10);
    cout << "Mediana = " << mediana(data)<<endl;
    
    auto end = chrono::steady_clock::now();
    cout << "Elapsed time in nanoseconds: "<< chrono::duration_cast<chrono::nanoseconds>(end - start).count()
    << " ns" << endl;
    return 0;
}

double mediana (double data[])
{
    double mediana;
    int n=10;
    if (n%2 == 0)
    {
        mediana = data[(n-1)/2]+data[n/2];
        mediana = mediana/2;
    }
    else
    {
        mediana = data [n/2];
    }
    return mediana;
}


