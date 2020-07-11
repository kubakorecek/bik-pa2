


class Complex{
    private:
        double m_RealPart;
        double m_ComplexPart;
        

    public:
         Complex( void );
         Complex( double const & real_part, double const & complex_part);
         Complex( double const & real_part);
         void m_print();
         void Abs();
         double getRealPart() const;
         double getImaginaryPart() const;
         
         static Complex Add(Complex & a, Complex & b);
         static Complex Subtract(Complex & a, Complex & b);
         static Complex Multiply(Complex & a, Complex & b);
         static Complex Divide(Complex & a, Complex & b);

         static Complex Compare(Complex & a, Complex & b);


         
         
         
};