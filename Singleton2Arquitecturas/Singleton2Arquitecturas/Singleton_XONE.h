#pragma once 

#include "Singleton.h"
#include <iostream>

//#define XBOXONE

class Singleton_XONE : public Singleton
{
public:
	std::string read(const std::string& filename)
	{
		return "Soy XONE\n";
	};

	void write(const std::string& filename, const std::string& content)
	{};
};