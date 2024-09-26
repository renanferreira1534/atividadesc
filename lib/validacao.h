#include <regex.h>
int validar_cpf(char *cpf)
{
    int i, soma, resto, digito1, dgito2;
    int peso1[9] = {10, 9, 8, 7, 6, 5, 4, 3, 2};
     int peso2[10] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2};

     //remover caracteres não numericose verificar se o cpf de 11 digitos
     // ... (implementação)

     // Calcular o primeiro digito verificador
     soma = 0;
     for (i = 0; i < 9; i++)
     {
        soma += (cpf[i] - '0') * peso1[i];
     }
     resto = soma % 11;
     if (resto < 2)
     {
        digito1 = 0;
     }
     else
     {
        digito1 = 11 - resto;
     }

     // calcular o segundo digito verificado
     soma = 0;
     for (i = 0; i < 10; i++)
     {
        soma += (cpf[i] - '0') * peso2[i];
     }
     resto = soma % 11;
     if (resto < 2)
     {
        digito2 = 0;
     }
     else
     {
        digito2 = 11 - resto;
     }
    
    // verificar se os digitos calculados correspondem aos digitos informados
    return (digito1 == cpf[9] - '0' && digito2 == cpf[10] - '0');
}
int validar_email(char *email)
{
    regex_t regex;
    int reti;
    char *pattern = "^[a-zA-z0-9._%+-]+@[a-zA-z0-9.-]+\\.[a.zA-Z]{2,}$";

    // compilar a expressão regular
    reti = regcomp(&regex, pattern, REG_EXTENDED);
    if (reti)
    {
        fprint(stderr, "regex error\n");
        return 0;
    }

    // Executar a expressão regular
    reti = regexec(&regex, email, 0, NULL, 0);
    regfree(&regex);
    return !reti;
}