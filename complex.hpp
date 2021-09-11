#pragma once
#include <elementarytypes.hpp>

namespace P{
  using P_Types::Float;
  using imaginary = P::Float;
  
  class Complex{
    P::Float r;
    imaginary i;
    
    Complex(Float real, imaginary i) : r(real), i(i) {};
    Complex() : r(0), i(0) {};
    
  };
  
}:
