#include <iostream>

void AfisareNumar(int numar);

int main()
{
	AfisareNumar(7);
	system("pause");
}

void AfisareNumar(int numar)
{
	std::cout << "Valoarea variabilei este " << numar << "." << std::endl;
}