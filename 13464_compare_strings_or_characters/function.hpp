#ifndef FUNCTION_H
#define FUNCTION_H

#include <string>
using std::string;

// TODO: please implement following overloaded functions
// Generally return 1 if the first parameter is greater than the second, 0 if the two ones are equal, -1 otherwise

int cmp(const string &, const string &);        // just compare the two strings
int cmp(const string &, const string &, int n); // compare the first n characters of two strings
int cmp(const string &, char);                  // compare the character and the string, considering the character as 1-lengthed string
int cmp(char, const string &);                  // similar with the above, only different in the order of the parameters
int cmp(char, const string &, int n);           // compare the character and the n-th character of the string
int cmp(const string &, char, int n);           // similar with the above, only different in the order of the parameters
int cmp(char, char);                            // just compare the two characters

// The first 4 ones are about comparing string, whereas the last 3 ones are just about characters.

#endif // FUNCTION_H
