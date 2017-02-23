#include <iostream>       
#include <thread>   

int v = 2;

void sumaVidas(int vidas)
{
	if (vidas != 0)
	{
		v = vidas + 1;
	}
	
	
}

void restaVidas(int vidas)
{
	if (vidas != 0)
	{
		v = vidas - 1;
	}
	
}

void cuentaVidas(int vidas)
{
	std::cout << v << std::endl;


}

void main()
{
	

	std::thread first (sumaVidas, v);
	std::thread second(restaVidas, v);
	std::thread third (cuentaVidas,v);

	//first.join();
	//second.join();
	//third.join();
	

	system("pause");
}