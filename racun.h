#include <string>

class Racun {
public:
  Racun(double stanje = 0.0, std::string valuta = "EUR");

  double dohvatiStanje();
  std::string dohvatiStanjeTekst();
  bool operator==(const Racun &racun);

protected:
  double stanje;
  std::string valuta;
};
