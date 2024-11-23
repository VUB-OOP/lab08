#include <string>

class Racun {
public:
  double dohvatiStanje();
  std::string dohvatiStanjeTekst();
  bool operator==(const Racun &racun);

protected:
  double stanje;
  std::string valuta;
};
