#include <iostream>
#include "uplatni_racun.h"
#include "isplatni_racun.h"

int main() {
  UplatniRacun uplatni;
  uplatni.uplati(100);
  uplatni.uplati(50);
  uplatni.prikaziTransakcije();

  // prikazuje se:
  // 100 EUR
  // 50 EUR

  IsplatniRacun isplatni(2000);
  // isplatni.isplati(1500) treba vratiti true
  if (isplatni.isplati(1500)) {
    std::cout << "Isplata uspješna" << std::endl;
  } else {
    std::cout << "Isplata neuspješna" << std::endl;
  }

  // isplatni.isplati(1000) treba vratiti false jer nema dovoljno sredstava
  if (isplatni.isplati(1000)) {
    std::cout << "Isplata uspješna" << std::endl;
  } else {
    std::cout << "Isplata neuspješna" << std::endl;
  }

  // prikazuje se:
  // -1500 EUR
  // druga isplata nije uspjela pa se ne prikazuje
  isplatni.prikaziTransakcije();
}
