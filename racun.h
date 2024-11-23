#include <string>

class Racun {
public:
  double dohvatiStanje();
  std::string dohvatiStanjeTekst();

protected:
  double stanje;
  std::string valuta;
};
