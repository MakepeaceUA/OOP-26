#include <iostream>
using namespace std;

void Func(int num) {
    int F_half = num / 1000;
    int S_half = num % 1000;

    int sum_Fhalf = 0;
    int sum_Shalf = 0;

    if (num < 100000 || num > 999999 && num < 1000000)
    {
        throw num;
    }
    if (num > 1000000 || num > 9999999)
    {
        throw exception("Error! Number has more or equel than 7 digits.\n");
    }


    for (int i = 0; i < 3; i++) 
    {
        sum_Fhalf += F_half % 10;
        sum_Shalf += S_half % 10;
        F_half /= 10;
        S_half /= 10;
    }

    if (sum_Fhalf != sum_Shalf) 
    {
        cout << "Number " << num << " is not a happy number.\n";
    }
    else 
    {
        cout << "Number " << num << " is a happy number!\n";
    }
}

int main() 
{
    try 
   {
        int number;
        cout << "Enter a 6-digit number:";
        cin >> number;

        Func(number);

    }
    catch (int number)
    {
        cout << "Error! Number: " << number << " has less or equal than 5 digits\n";
    }
    catch (const exception& val)
    {
        cout << val.what();
    }


}
