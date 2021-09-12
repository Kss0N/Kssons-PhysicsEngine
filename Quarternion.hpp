#pragma once
#include "complex.hpp"

namespace P{
  using jmaginary = P::Float;
  using kmaginary = P::Float;
  
  class Quarternion : private Complex {
    jmaginary j;
    kmaginary k;
  public:
    Quarternion(const P::Float real, const P::imaginary i, const P::jmaginary j, const P::kmaginary k) : r(real), i(i), j(j), k(k) {};
    Quarternion() : Quarternion(0,0,0,0) {};
    
  };
};
