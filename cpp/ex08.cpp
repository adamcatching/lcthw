#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    // CHALLENGE 1 HERE

    string from_number = to_string(123456);
    string from_float = to_string(1.1000f);
    int a = stoi("1234");
    long b = stol("1234");
    long long c = stoll("1234");
    unsigned long d = stoul("1234");
    unsigned long long e = stoull("1234");
    float f = stof("1234");
    double g = stod("1234");
    long double h = stold("1234");

    ostringstream msg;

    msg << "Test numbers: " << a << b << c << d << e << f << g << h << endl;
    // CHALLENGE 2 HERE

    msg << "From number " << from_number << endl;
    msg << "From float " << from_float << endl;

    cout << "The result is: " << endl << msg.str();
    return 0;
}