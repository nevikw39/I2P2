#include <iostream>
#include <cstring>

using namespace std;

class polynomial
{
private:
    const static int N = 1e5;
    int degree, coefficients[N];
    void set_coefficients(int *);

public:
    polynomial(int deg = 0) : degree(deg) { memset(coefficients, sizeof(coefficients), 0); }
    friend istream &operator>>(istream &is, polynomial &p) // implement this during the quiz seems to be too
    {
        int d;
        is >> d;
        if (!is) // if EOF occured, we should return istream immediately, otherwise the program would stuck
            return is;
        p = polynomial(d); // clear the content that p previously restored
        int coef[N] = {0};
        for (int i = d; ~i; i--)
            is >> coef[i];
        p.set_coefficients(coef);
        return is;
    }
    // Overload operator << that prints the a polynomial to stream. The output formet is described in the problem.
    friend ostream &operator<<(ostream &, const polynomial &);
    // Overload operator + that performs addition of two polynomials.
    polynomial operator+(const polynomial &) const;
    // Overload operator - that performs subtraction of two polynomials.
    polynomial operator-(const polynomial &) const;
};

/**

  * TODO: Create a cpp and paste, uncomment and implement the following codes.

void polynomial::set_coefficients(int *coef)
{
    // ...
}

ostream &operator<<(ostream &os, const polynomial &p)
{
    // Use `os` instead of cout here
    // Becare of the output format
    return os;
}

polynomial polynomial::operator+(const polynomial &x) const
{
    // ...
}

polynomial polynomial::operator-(const polynomial &x) const
{
    // ...
}

 */
