#pragma once
#include "complex.hpp"

namespace P{
  using jmaginary = P::Float;
  using kmaginary = P::Float;
  
  class Quarternion : private Complex {
    jmaginary j;
    kmaginary k;
    public:
      Quarternion(P::Float real, P::imaginary i, P::jmaginary j, P::kmaginary k) : r(real), i(i), j(j), k(k) {};
      Quarternion() : Quarternion(0,0,0,0) {};
    
  };
};
