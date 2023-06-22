#include <iostream>
#include "sculptor.hpp"

int main() {
  
  //teste 1
  Sculptor s(10,10,10);
  s.setColor(0,0,1.0,1.0);
  s.putBox(0,9,0,9,0,9);
  s.cutBox(1,8,1,9,1,9);
  s.writeOFF("trono.off");

  //teste 2
  Sculptor esfera(10,10,10);
  esfera.setColor(1.0,0,0,1.0);
  esfera.putSphere(3,3,3,4);
  esfera.cutSphere(2,2,2,4);
  esfera.writeOFF("bola.off");
  
  //teste 3
  Sculptor elipsoide(10,10,10);
  elipsoide.setColor(0,1.0,0,1.0);
  elipsoide.putEllipsoid(6,6,6,4,3,3);
  elipsoide.cutEllipsoid(6,6,6,4,3,2);
  elipsoide.writeOFF("elipse.off");
  
}