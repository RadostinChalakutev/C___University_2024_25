#include <iostream>
using namespace std;

int main(){
  setlocale(LC_ALL, "Bulgarian");
  const double KiseloMlqko=1.80;
  const double FILADELFIAKLASICHESKA=4.28;
  const double FILADELFIQ_PODPRAVKI = 4.28;
    const double FILADELFIQ_KRASTAVICHKI = 4.29;
    const double QICA_GRADUS = 0.51;
    const double QICA_ZORA = 0.35;

    bool kupihQica = false;

  cout << "Хляб „Елиаз“ с квас" << endl;

  cout << "Кисело мляко „Елена“ 3.6% - ";
  if (KiseloMlqko  < 1.80) {
    cout << 4;
  }
  else {
    cout << 2;
  }
  cout << " бр." << endl;
  cout << "Крем сирене „Филаделфия“ ";

  if (FILADELFIAKLASICHESKA <= FILADELFIQ_PODPRAVKI
      && FILADELFIAKLASICHESKA <= FILADELFIQ_KRASTAVICHKI) {
    cout << "класическо";
      }
  else {
    if (FILADELFIQ_PODPRAVKI < FILADELFIQ_KRASTAVICHKI) {
      cout << "подправки";
    }
    else {
      cout << "краставички";
    }
  }
  cout << " - 1 бр." << endl;


  if (QICA_GRADUS <= 0.50 && QICA_ZORA >= 0.40) {
    cout << "Яйца Градус - 6 бр." << endl;
    kupihQica = true;
  }
  else {
    if (QICA_ZORA < 0.40) {
      cout << "Яйца Зора - 6 бр." << endl;
      kupihQica = true;
    }
  }

  if (kupihQica == true) {
    cout << "Чесън" << endl;
  }

  cout << "Шоколад Lindt" << endl;

  return 0;
}
