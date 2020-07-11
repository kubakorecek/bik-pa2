#include<iostream>
#include "complex_number.cpp" 
using namespace std;

int main(){
    Complex c = Complex(1,1);
    c.Abs();
    Complex b = Complex(5,2);
    Complex d = Complex::Add(c,b);
    d.m_print();
}