#include "isplatni_racun.h"

// prosljeđivanje argumenata baznom konstruktoru
IsplatniRacun::IsplatniRacun(double stanje, std::string valuta) : Racun(stanje, valuta) {}