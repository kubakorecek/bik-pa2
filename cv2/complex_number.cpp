
#include "complex_number.h"
#include <iostream>
#include <cmath>
using namespace std;

Complex::Complex(){
    m_ComplexPart=0;
    m_RealPart=0;
}
Complex::Complex(double const &real_part){
    m_RealPart = real_part;
}
Complex::Complex(double const &real_part,double const &complex_part){
m_RealPart = real_part;
m_ComplexPart = complex_part;
}
void Complex::Abs(){
    cout<<"Absolute value is:"<<sqrt(pow(m_ComplexPart,2)+pow(m_RealPart,2))<<endl;
}

