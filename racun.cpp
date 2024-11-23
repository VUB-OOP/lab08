#include "racun.h"

double Racun::dohvatiStanje() {
  return stanje;
}

std::string Racun::dohvatiStanjeTekst() {
  return std::to_string(stanje) + " " + valuta;
}

bool Racun::operator==(const Racun &racun) {
  if (stanje == racun.stanje && valuta == racun.valuta) {
    return true;
  }
  return false;

  // isto kao prethodne linije smao u jednom redu:
  // return stanje == racun.stanje && valuta == racun.valuta;
}