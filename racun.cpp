#include "racun.h"
#include <iostream>

Racun::Racun(double stanje, std::string valuta) {
  this->stanje = stanje;
  this->valuta = valuta;
}

double Racun::dohvatiStanje() {
  return stanje;
}

std::string Racun::dohvatiStanjeTekst() {
  return std::to_string(stanje) + " " + valuta;
}

void Racun::prikaziTransakcije() {
  for (int i = 0; i < transakcije.size(); i++) {
    std::cout << transakcije[i] << " " << valuta << std::endl;
  }
}

bool Racun::operator==(const Racun &racun) {
  if (stanje == racun.stanje && valuta == racun.valuta) {
    return true;
  }
  return false;

  // isto kao prethodne linije smao u jednom redu:
  // return stanje == racun.stanje && valuta == racun.valuta;
}