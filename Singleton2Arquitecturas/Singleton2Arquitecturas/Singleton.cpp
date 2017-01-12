#include "Singleton.h"
//OJO !!! AQUI SE INCLUYEN LOS HEADERS DE LAS DIFERENTES PLATAFORMAS
#include "Singleton_PS4.h" 
#include "Singleton_XONE.h"


Singleton* Singleton::Instance()
{
	
	static Singleton *_instance;

#ifdef PLAYSTATION4
	static Singleton * _instance = (Singleton*) new Singleton_PS4();
#elif XBOXONE
	static Singleton * _instance = (Singleton*) new Singleton_XONE();
#endif

	return _instance;
}

void main()
{
	Singleton * instance;
	instance->Instance();

	system("pause");

}