#include <iostream>
#include <Windows.h>
using namespace std;

char* removeQuotesDynamic(const char* sentence) {
    bool insideQuotes = false;
    char quoteType = '\0';
    int writeIndex = 0;

    int length = 0;
    while (sentence[length] != '\0') {
        length++;
    }

    char* result = new char[length + 1];

    for (int i = 0; i < length; ++i) {
        if (sentence[i] == '`' || sentence[i] == '\'' || sentence[i] == '"') {
            if (!insideQuotes) {
                insideQuotes = true;
                quoteType = sentence[i];
            }
            else if (sentence[i] == quoteType) {
                insideQuotes = false;
                quoteType = '\0';
            }
        }
        else if (!insideQuotes) {
            result[writeIndex] = sentence[i];
            writeIndex++;
        }
    }

    result[writeIndex] = '\0';
    return result;
}

int main() {
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char sentence[1000];

    cout << "Введите предложение: ";
    cin.getline(sentence, 1000);

    char* resultDynamic = removeQuotesDynamic(sentence);
    cout << "Текст без кавычек: " << resultDynamic << endl;

    delete[] resultDynamic;

    return 0;
}
