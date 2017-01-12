#pragma once 

#include "Singleton.h"
#include <iostream>

//#define PLAYSTATION4

class Singleton_PS4 : public Singleton
{
public:
	std::string read(const std::string& filename)
	{
		return "Soy PS4\n";
	};

	void write(const std::string& filename, const std::string& content)
	{};
};