#include <iostream>
#include <ctime>
using std::cin;
using std::cout;
using std::endl;

int main() {
    setlocale(LC_ALL, "Bulgarian");
    const int ALPHABET_START = (int)'а';
    const int ALPHABET_CHAR_COUNT = (int)'я' - ALPHABET_START + 1;
    const int MAX_BR_SUGLASNI = 2;
    const int MAX_BR_SRICHKI = 4;



    srand(time(NULL));


    char glasni[] = { 'а', 'ъ', 'о', 'у', 'е', 'и', 'ю', 'я' };


    int kolkoSrichki = rand() % MAX_BR_SRICHKI;

    for (int brSrichki = 0; brSrichki <= kolkoSrichki; brSrichki++) {

        char bukva;
        bool isGlasna = false;

        int kolkoSugasni = rand() % MAX_BR_SUGLASNI;

        for (int brSugl = 0; brSugl <= kolkoSugasni; brSugl++) {
            //generirane na suglasna

            do {
                bukva = (char)(rand() % ALPHABET_CHAR_COUNT + ALPHABET_START);
                isGlasna = false;

                for (int i = 0; i < 8; i++) {
                    if (bukva == glasni[i]) {
                        isGlasna = true;
                        break;
                    }
                }
            } while (isGlasna);

            cout << bukva;
        }

        //generirane na glasna
        cout << glasni[rand() % 8];


        //generirane na suglasna
        for (int brSugl = 0; brSugl <= kolkoSugasni - 1; brSugl++) {
            //generirane na suglasna

            do {
                bukva = (char)(rand() % ALPHABET_CHAR_COUNT + ALPHABET_START);
                isGlasna = false;

                for (int i = 0; i < 8; i++) {
                    if (bukva == glasni[i]) {
                        isGlasna = true;
                        break;
                    }
                }
            } while (isGlasna);

            cout << bukva;
        }
    }

    cout << endl;


    return 0;
}