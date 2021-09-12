#pragma once
#include <elementarytypes.hpp>

namespace P{
	using namespace P_Types;
	using imaginary = P::Float;
	
	class Complex{
		P::Float r;
		imaginary i;
	public: 
		Complex(Float real, imaginary i) : r(real), i(i) {};
		Complex() : r(0), i(0) {};
  };
  
}:
