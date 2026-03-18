// #making a calculator using functions and which can calculate sum , multiplication , division , is prime , isodd  ,
#include <iostream>
using namespace std;
// finction prototype
// it is consideer as best practiceif we use function prototype
float sum(float a, float b);
float sub(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
bool isprime(int a);
bool isodd(int a);
bool iseven(int a);

float sum(float a, float b)
{
    return a + b;
}
float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    if (b != 0)
    {
        return a / b;
    }
    else{
        return 0.0;
    }
}

float sub(float a, float b)
{
    return a - b;
}

bool isprime(int a)
{
    int count = 0;
    if (a<=1){
        return false;
    }
    else{
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            count++;
        }
        else
        {
            continue;
        }
    }
    if (count == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
}

bool isodd(int a)
{
    if (a % 2 == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
bool iseven(int a)
{
    if (a % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout << sum(1, 2) << endl;
    cout << multiply(1, 2) << endl;
    cout << sub(1, 2) << endl;
    cout << divide(1, 2) << endl;
    cout << isprime(46) << endl;
    cout << isodd(1) << endl;
    cout << iseven(1) << endl;

    return 0;
}
