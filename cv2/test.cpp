#include<iostream>
#include "complex_number.cpp" 
using namespace std;

int main(){
    Complex c = Complex(3,2);
    c.Abs();
    Complex b = Complex(4,-3);
    Complex da = Complex::Add(c,b);
    Complex ds = Complex::Subtract(c,b);
    Complex dm = Complex::Multiply(c,b);
    Complex dd = Complex::Divide(c,b);
    da.m_print();
    ds.m_print();
    dm.m_print();
    dd.m_print();
}