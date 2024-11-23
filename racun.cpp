#include "racun.h"

double Racun::dohvatiStanje() {
  return stanje;
}

std::string Racun::dohvatiStanjeTekst() {
  return std::to_string(stanje) + " " + valuta;
}