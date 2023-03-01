#include <stdio.h>

int main() {
    float sp = 67836.43; // faturamento em SP
    float rj = 36678.66; // faturamento no RJ
    float mg = 29229.88; // faturamento em MG
    float es = 27165.48; // faturamento no ES
    float outros = 19849.53; // faturamento nos demais estados
    float total = sp + rj + mg + es + outros; // faturamento total

    // cálculo dos percentuais
    float pct_sp = sp/total * 100;
    float pct_rj = rj/total * 100;
    float pct_mg = mg/total * 100;
    float pct_es = es/total * 100;
    float pct_outros = outros/total * 100;

    // exibição dos resultados
    printf("Percentual de faturamento por estado:\n");
    printf("SP: %.2f%%\n", pct_sp);
    printf("RJ: %.2f%%\n", pct_rj);
    printf("MG: %.2f%%\n", pct_mg);
    printf("ES: %.2f%%\n", pct_es);
    printf("Outros: %.2f%%\n", pct_outros);

    return 0;
}
