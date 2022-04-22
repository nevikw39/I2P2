#include "function.h"
#include <algorithm>

void polynomial::set_coefficients(int *coef) { copy(coef, coef + N, coefficients); }

ostream &operator<<(ostream &os, const polynomial &p)
{
    if (abs(p.coefficients[p.degree]) > 1 || !p.degree)
        os << p.coefficients[p.degree];
    else if (!~p.coefficients[p.degree])
        os << '-';
    if (p.degree)
    {
        os << 'x';
        if (p.degree > 1)
            os << '^' << p.degree;
    }
    for (int i = p.degree - 1; i >= 0; i--)
    {
        if (p.coefficients[i] > 0)
            os << " + ";
        else if (p.coefficients[i] < 0)
            os << " - ";
        else
            continue;
        if (abs(p.coefficients[i]) > 1 || !i)
            os << abs(p.coefficients[i]);
        if (i)
        {
            os << 'x';
            if (i > 1)
                os << '^' << i;
        }
    }
    return os;
}

polynomial polynomial::operator+(const polynomial &x) const
{
    polynomial y(max(degree, x.degree));
    for (int i = 0; i <= y.degree; i++)
        y.coefficients[i] = coefficients[i] + x.coefficients[i];
    while (!y.coefficients[y.degree] && y.degree > 0)
        --y.degree;
    return move(y);
}

polynomial polynomial::operator-(const polynomial &x) const
{
    auto p = x;
    transform(p.coefficients, p.coefficients + N, p.coefficients, negate<int>());
    return move(operator+(p));
}
