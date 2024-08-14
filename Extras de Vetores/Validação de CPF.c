#include <stdio.h>
#define TF 11
int main()
{
    int VetCPF[TF], i, mult, num = 10, TL = 9, digito1, digito2, soma = 0, resto;
    char temp;

    // Inserir os números do CPF
    for (i = 0; i < TF; i++)
    {
        printf("Digite o %do. numero do CPF:\n", i + 1);
        scanf(" %c", &temp); 
        VetCPF[i] = temp - '0';  // Convertendo o caractere para inteiro
    }

    // Cálculo do primeiro dígito verificador
    for (i = 0; i < TL; i++)
    {
        mult = VetCPF[i] * num;
        soma += mult;
        num--;
    }
    resto = soma % 11;
    digito1 = 11 - resto;

    if (digito1 == 10 || digito1 == 11)
        digito1 = 0;

    // Cálculo do segundo dígito verificador
    soma = 0;
    num = 11;
    for (i = 0; i < TL + 1; i++) 
    {
        mult = VetCPF[i] * num;
        soma += mult;
        num--;
    }
    resto = soma % 11;
    digito2 = 11 - resto;

    if (digito2 == 10 || digito2 == 11)
        digito2 = 0;

    // Verificação dos dígitos
    if (digito1 == VetCPF[9] && digito2 == VetCPF[10])
        printf("==== CPF Valido ====\n");
    else
        printf("!!!! CPF Invalido !!!!");

    return 0;
}
