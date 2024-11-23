#include "uplatni_racun.h"

void UplatniRacun::uplati(double iznos) {
  stanje = stanje + iznos;
  transakcije.push_back(iznos);
}