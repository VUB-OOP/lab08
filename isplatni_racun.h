#include "racun.h"

class IsplatniRacun : public Racun {
public:
  IsplatniRacun(double stanje, std::string valuta = "EUR");
  bool isplati(double iznos);
};