#pragma once

#include <string>
#include <vector>

class Racun {
public:
  Racun(double stanje = 0.0, std::string valuta = "EUR");

  double dohvatiStanje();
  std::string dohvatiStanjeTekst();
  void prikaziTransakcije();
  int brojTransakcija();

  bool operator==(const Racun &racun);

protected:
  double stanje;
  std::string valuta;
  std::vector<double> transakcije;
};
