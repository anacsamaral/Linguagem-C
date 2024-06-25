#include <stdio.h>

int main() {
    // Declaração e inicialização das variáveis
    float valor_computador, prestacao, juros, saldo_devedor;
    float total_juros = 0, valor_total_juros, prestacao_final = 0, valor_ultima_prestacao, valor_total_pago;
    int meses = 0;
    printf("Digite o valor do computador:\n");
    scanf("%f", &valor_computador);
    saldo_devedor = valor_computador;

    // Simulação do pagamento mês a mês
    while (saldo_devedor > 0) 
    {
        prestacao = valor_computador / 20;
        // Aplicar juros sobre o saldo devedor
        juros = saldo_devedor * 0.02;
        total_juros += juros;
        saldo_devedor += juros;

        // Amortizar a dívida com a prestação mensal
        if (saldo_devedor > prestacao)
            saldo_devedor -= prestacao;
        else 
        {
            prestacao_final = saldo_devedor;
            saldo_devedor = 0;
        }

        // Incrementar o número de meses
        meses++;
    }

    // Resultados
    valor_total_juros = total_juros;
    valor_ultima_prestacao = (prestacao_final > 0) ? prestacao_final : prestacao;
    valor_total_pago = valor_computador + valor_total_juros;

    printf("Valor total pago em juros: R$ %.2f\n", valor_total_juros);
    printf("Total de meses para quitar a dívida: %d\n", meses);
    printf("Valor da última prestação: R$ %.2f\n", valor_ultima_prestacao);
    printf("Valor total pago: R$ %.2f\n", valor_total_pago);
    printf("Foi um bom negócio? %s\n", (valor_total_pago <= valor_computador) ? "Sim" : "Não");

    return 0;
}
