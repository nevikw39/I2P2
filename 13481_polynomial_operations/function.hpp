#include <iostream>
#include <array>
#include <vector>

#if __cplusplus < 201103L
#error Sorry, but for this partial judge problem, it requires at least C++11!
#endif

using namespace std;

constexpr int N = 1e5;

class polynomial
{
private:
    int degree;
    array<int, N> coefficients; // It could be deemed as ordinary array, but we needn't care about destructor.
    // You need implement this function which is called by operator>>() to complete the operator. coef[i] indicatea the coefficient of the x^i term.
    void set_coefficients(const vector<int> &);

public:
    polynomial(int deg = 0) : degree(deg) { fill(coefficients.begin(), coefficients.end(), 0); }
    friend istream &operator>>(istream &is, polynomial &p) // implement this during the quiz seems to be too
    {
        int d;
        is >> d;
        if (!is) // if EOF occured, we should return istream immediately, otherwise the program would stuck
            return is;
        p = polynomial(d); // clear the content that p previously restored
        vector<int> coef(d + 1);
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

TODO: Create a cpp and paste, uncomment and implement the following codes.

void polynomial::set_coefficients(const vector<int> &v)
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

polynomial &&polynomial::operator-(const polynomial &x) const
{
    // ...
}

 */
