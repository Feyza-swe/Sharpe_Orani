#include <stdio.h>

// Sharpe oran� hesaplama fonksiyonu
double sharpe_orani(double getiri, double risksiz_oran, double sapma) {
    return (getiri - risksiz_oran) / sapma;
}

int main() {
    double getiri, risksiz_oran, sapma, oran;

    // Kullan�c�dan verileri alma
    printf("Yatirim getirisini girin (%%): ");
    scanf("%lf", &getiri);
    printf("Risksiz faiz oranini girin (%%): ");
    scanf("%lf", &risksiz_oran);
    printf("Standart sapmayi girin (%%): ");
    scanf("%lf", &sapma);

    // Y�zdeyi kesirli de�ere �evirme
    getiri /= 100;
    risksiz_oran /= 100;
    sapma /= 100;

    // Sharpe oran�n� hesaplama
    oran = sharpe_orani(getiri, risksiz_oran, sapma);

    // Sonucu ekrana yazd�rma
    printf("Sharpe Orani: %.2f\n", oran);

    // Sharpe oran�n�n de�erlendirilmesi
    if (oran > 3.0) {
        printf("Sharpe Orani mukemmel!\n");
    } else if (oran > 2.0) {
        printf("Sharpe Orani cok iyi.\n");
    } else if (oran > 1.0) {
        printf("Sharpe Orani iyi.\n");
    } else {
        printf("Sharpe Orani dusuk.\n");
    }

    return 0;
}





