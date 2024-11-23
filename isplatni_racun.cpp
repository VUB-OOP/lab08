#include "isplatni_racun.h"

// prosljeđivanje argumenata baznom konstruktoru
IsplatniRacun::IsplatniRacun(double stanje, std::string valuta) : Racun(stanje, valuta) {}

bool IsplatniRacun::isplati(double iznos) {
  if (iznos < stanje) {
    stanje = stanje - iznos;
    transakcije.push_back(-1 * iznos);
    return true;
  }
  return false;
}