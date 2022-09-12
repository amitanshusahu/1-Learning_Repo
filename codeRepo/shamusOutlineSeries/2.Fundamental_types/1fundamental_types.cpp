#include <iostream>
#include <climits> // SHORT_MIN ...etc
#include <cfloat>  // FLT_MIN ...etc
using namespace std;
int main()
{
    // ##intregal type
    // # Boolean type
    bool flag = false;
    // size
    cout << "bool flag size- " << sizeof(flag) << endl;
    // # Character type
    char a = 'a';
    unsigned char b = 'b';
    // size
    cout << "char a size- " << sizeof(a) << endl;
    cout << "unsigned char b size- " << sizeof(b) << endl;
    // #integer type
    short no1 = 1;
    int no2 = 13;
    long no3 = 12232;
    unsigned short no4 = 13;
    unsigned int no5 = 13;
    unsigned long no6 = 13;
    // size
    cout << "short no1 size-" << sizeof(no1) << endl
         << "int no2 size-" << sizeof(no2) << endl
         << "long no3 size-" << sizeof(no3) << endl
         << "unsigned short no4 size-" << sizeof(no4) << endl
         << "unsigned int no5 size-" << sizeof(no5) << endl
         << "unsigned long no6 size-" << sizeof(no6) << endl;
    // Range
    cout << "short no1  Range - " << SHRT_MIN << " - " << SHRT_MAX << endl
         << "int no2  Range - " << INT_MIN << " - " << INT_MAX << endl
         << "long no3 Range - " << LONG_MIN << " - " << LONG_MAX << endl
         << "unsigned short no4 Range - "
         << "0"
         << " - " << USHRT_MAX << endl
         << "unsigned int no5 Range - "
         << "0"
         << " - " << UINT_MAX << endl
         << "unsigned long no6 Range - "
         << "0"
         << " - " << ULONG_MAX << endl;

    // ## Floating type
    float dec = 1.22;
    double dec2 = 12.4556;
    long double dec3 = 1323.4354;
    // size
    cout << "float dec size- " << sizeof(dec) << " bytes" << endl
         << "long double dec size- " << sizeof(dec3) << " bytes" << endl
         << "double dec size- " << sizeof(dec2) << " bytes" << endl;
    // Details
    int fbits = 8 * sizeof(float);
    cout << "float uses " << fbits << " bits:\n\t"
         << FLT_MANT_DIG - 1 << " bits for its mantissa,\n\t "
         << fbits - FLT_MANT_DIG << " bits for its exponent,\n\t "
         << 1 << " bit for its sign\n"
         << "to obtain : " << FLT_DIG << " sig.digits\n "
         << " range " << FLT_MIN << "-"<<FLT_MAX<<endl;

    return 0;
}