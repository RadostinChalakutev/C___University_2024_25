#include <iostream>
#include <ctime>
using std::cin;
using std::cout;
using std::endl;

char proizvolnaBukva(int alphabetStart, int alphabetCharCount);
char proizvolnaBukva();
char proizvolnaGlasna();
bool isGlasna(char bukva);
char proizvolnaSuglasna();

void printProizvolnaSrichka();
void printProizvolnaDuma();


int main() {

    setlocale(LC_ALL, "Bulgarian");

    srand(time(NULL));

    printProizvolnaDuma();

    cout << endl;


    return 0;
}



char proizvolnaBukva() {
    const int ALPHABET_START = (int)'а';
    const int ALPHABET_CHAR_COUNT = (int)'я' - ALPHABET_START + 1;
    return proizvolnaBukva(ALPHABET_START, ALPHABET_CHAR_COUNT);
}

char proizvolnaBukva(int alphabetStart, int alphabetCharCount) {
    return (char)(rand() % alphabetCharCount + alphabetStart);
}


char proizvolnaGlasna() {
    char glasni[] = { 'а', 'ъ', 'о', 'у', 'е', 'и', 'ю', 'я' };
    return glasni[rand() % 8];
}


bool isGlasna(char bukva) {
    char glasni[] = { 'а', 'ъ', 'о', 'у', 'е', 'и', 'ю', 'я' };

    for (int i = 0; i < 8; i++) {
        if (bukva == glasni[i]) {
            return true;
        }
    }

    return false;
}


char proizvolnaSuglasna() {
    char bukva;

    do {
        bukva = proizvolnaBukva();

    } while (isGlasna(bukva) || bukva == 'ы' || bukva == 'э');

    return bukva;
}


void printProizvolnaSrichka() {
    const int MAX_BR_SUGLASNI = 2;

    int kolkoSugasni = rand() % MAX_BR_SUGLASNI;

    for (int brSugl = 0; brSugl <= kolkoSugasni; brSugl++) {
        cout << proizvolnaSuglasna();
    }

    //generirane na glasna
    cout << proizvolnaGlasna();


    //generirane na suglasna
    for (int brSugl = 0; brSugl <= kolkoSugasni - 1; brSugl++) {
        cout << proizvolnaSuglasna();
    }
}


void printProizvolnaDuma() {
    const int MAX_BR_SRICHKI = 3;
    int kolkoSrichki = rand() % MAX_BR_SRICHKI;

    for (int brSrichki = 0; brSrichki <= kolkoSrichki; brSrichki++) {

        printProizvolnaSrichka();
    }
}