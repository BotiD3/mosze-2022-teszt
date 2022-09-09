#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //sintax error
    std::cout << '1-100 ertekek duplazasa' //missing code
    for (int i = 0;) //wrong for sintax
    {
        b[i] = i * 2; //logic error
    }
    for (int i = 0; i; i++) //missing code
    {
        std::cout << "Ertek:" //missing code
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i] //missing comma
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
