
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
    m_ComplexPart = 0;
}
Complex::Complex(double const &real_part,double const &complex_part){
m_RealPart = real_part;
m_ComplexPart = complex_part;
}

double Complex::getRealPart() const{
    return m_RealPart;
};
double Complex::getImaginaryPart() const{
    return m_ComplexPart;
};
void Complex::m_print(){
    string l = " ";
    if(m_ComplexPart>0   
    ){
        l = "+";
    }
    cout<<m_RealPart<<l<<m_ComplexPart<<"i" <<endl;
}
void Complex::Abs(){
    cout<<"Absolute value is:"<<sqrt(pow(m_ComplexPart,2)+pow(m_RealPart,2))<<endl;
}
Complex Complex::Add(Complex & a, Complex & b)
{
    
    return Complex(a.getRealPart() + b.getRealPart(),a.getImaginaryPart() + b.getImaginaryPart() ); 
}

Complex Complex::Subtract(Complex & a, Complex & b)
{
    
    return Complex(a.getRealPart() - b.getRealPart(),a.getImaginaryPart() - b.getImaginaryPart() ); 
}

Complex Complex::Multiply(Complex & a, Complex & b)
{   
    double tmp_real = a.getRealPart()*b.getRealPart() - a.getImaginaryPart()*b.getImaginaryPart();
    double tmp_com = a.getRealPart()*b.getImaginaryPart() + a.getImaginaryPart()*b.getRealPart();
    return Complex(tmp_real,tmp_com ); 
}

Complex Complex::Divide(Complex & a, Complex & b)
{   
    Complex Conjugate = Complex(b.getRealPart(),-b.getImaginaryPart());
    Complex Nominator = Multiply(a,Conjugate);
    Complex Denominator = Multiply(b,Conjugate);

    return Complex(Nominator.getRealPart() / Denominator.getRealPart(),Nominator.getImaginaryPart() / Denominator.getRealPart() ); 
}
