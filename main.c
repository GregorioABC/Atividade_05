//1º
// #include <stdio.h>
// #include <stdlib.h>

// int main(void) {
//   int notas[5];
//   int aprovados = 0;
//     for (int i = 0; i < 5; i++) {
//       printf("Digite a nota do aluno %d: ", i + 1);
//       scanf("%d", &notas[i]);
//     }
//     for (int i = 0; i < 5; i++) {
//       if (notas[i] >= 7) {
//         aprovados++;
//         }
//     }
//     printf("Número de alunos aprovados: %d\n", aprovados);
//     return 0;
// }
// 2
// #include <stdio.h>
// #include <stdlib.h>
// int main(void) {
//   int numero;
//   int soma=0;
//   printf("Informe o número inteiro");
//   scanf("%d",&numero);
// while (numero !=0){
//   int digito =numero%10;
//   soma+= digito;
//   numero/=10;
// }
//   printf("O resultado da soma é : %d ", soma);
// return 0;
// }
// 3
// #include <stdio.h>
// #include <stdlib.h>
// int main(void) {
//   int numero;
//   printf("Digite um número inteiro: ");
//     scanf("%d", &numero);
//     printf("Os divisores de %d são:\n", numero);
//     for (int i = 1; i <= numero; i++) {
//       if (numero % i == 0) {
//         printf("%d ", i);
//         }
//     }
//     return 0;
// }
// 4
// #include <stdio.h>
// #include <stdlib.h>
// int main(void) {
//   int numPessoas = 5;
//   float altura, somaAltura = 0;
//     for (int i = 1; i <= numPessoas; i++) {
//         printf("Digite a altura da pessoa %d (em metros): ", i);
//         scanf("%f", &altura);
//         somaAltura += altura;
//     }
//     float mediaAltura = somaAltura / numPessoas;
//     printf("A média de altura das %d pessoas é %.2f metros.\n", numPessoas, mediaAltura);
//     return 0;
// }
// 5
// #include <stdio.h>
// #include <stdlib.h>
// int main(void) {
//   for (int i = 1; i <= 100; i++) {
//     if (i % 3 == 0 && i % 5 == 0) {
//       printf("FizzBuzz ");
//     } else if (i % 3 == 0) {
//       printf("Fizz ");
//     } else if (i % 5 == 0) {
//       printf("Buzz ");
//     } else {
//       printf("%d ", i);
//   }
// }
//     printf("\n");
//     return 0;
// }
// 6
// #include <stdio.h>
// #include <stdlib.h>
// int main(void) {
//   int numero, digito, soma = 0;
//     printf("Digite um número inteiro: ");
//     scanf("%d", &numero);
//     while (numero != 0) {
//       digito = numero % 10; 
//     if (digito % 2 == 0) {
//       soma += digito;
//         }
//       numero /= 10;
//     }
//     printf("A soma dos dígitos pares é: %d\n", soma);
//     return 0;
// }
// 7
// #include <stdio.h>
// #include <stdlib.h>
// int main(void) {
//   int numero, numeroInvertido = 0;
//     printf("Digite um número inteiro: ");
//     scanf("%d", &numero);
//     while (numero != 0) {
//       int digito = numero % 10;  
//         numeroInvertido = numeroInvertido * 10 + digito;
//         numero /= 10;
//     }
//     printf("O número invertido é: %d\n", numeroInvertido);
//     return 0;
// }
// 8
// #include <stdio.h>
// #include <stdlib.h>
// int main(void) {
//   int numero = 1;
//   int soma = 0;
//     while (numero <= 100) {
//       soma += numero;
//       numero++;        
//     }
//     printf("A soma dos números de 1 a 100 é: %d\n", soma);
//     return 0;
// }
// 9
// #include <stdio.h>
// #include <stdlib.h>
// int main(void) {
//   int numero = 1;
//   int produto = 1;
//     while (numero <= 5) {
//       produto *= numero;
//       numero++;
//     }
//     printf("O produto dos números de 1 a 5 é: %d", produto);
//     return 0;
// }
// 10
// #include <stdio.h>
// #include <stdlib.h>
// int main(void) {
//   int multiplicador = 1;
//     printf("Tabuada do 9:\n");
//     while (multiplicador <= 10) {
//         int resultado = 9 * multiplicador;
//         printf("9 x %d = %d\n", multiplicador, resultado);
//         multiplicador++;
//     }
//     return 0;
// }
// 11
// #include <stdio.h>
// #include <stdlib.h>
// int main(void) {
//   int numero;
//     int maior, menor;
//     int primeiroNumero = 1;
//     printf("Digite uma sequência de números inteiros (0 para parar):\n");
//     while (1) {
//       printf("Digite um número: ");
//       scanf("%d", &numero);
//     if (primeiroNumero) {
//       maior = numero;
//       menor = numero;
//       primeiroNumero = 0;
//   } else {
//       if (numero == 0) {
//       break;
//       }
//     if (numero > maior) {
//       maior = numero;
//             }
//     if (numero < menor) {
//       menor = numero;
//             }
//         }
//     }
//     printf("O maior número digitado foi: %d", maior);
//     printf("O menor número digitado foi: %d", menor);
//     return 0;
// }
// // 12
// #include <stdio.h>
// #include <stdlib.h>
// int main(void) {
//   int numero;
//     int soma = 0;
//     int contador = 0;
//     printf("Digite uma sequência de números inteiros (-1 para parar):");
//     while (1) {
//         printf("Digite um número: ");
//         scanf("%d", &numero);
//         if (numero == -1) {
//             break;
//         }
//         soma += numero;
//         contador++;
//     }
//     if (contador == 0) {
//         printf("Nenhum número foi digitado.");
//     } else {
//         float media = (float)soma / contador;
//         printf("A média dos números digitados é: %.2f", media);
//     }
//     return 0;
// }
// 13
// #include <stdio.h>
// #include <stdlib.h>
// int main(void) {
//    int numero, digito, somaCubos = 0;
//     printf("Digite um número inteiro: ");
//     scanf("%d", &numero);
//     while (numero != 0) {
//         digito = numero % 10;
//         somaCubos += pow(digito, 3);
//         numero /= 10;
//     }
//     printf("A soma dos cubos dos dígitos é: %d", somaCubos);
//     return 0;
// }
// 14
#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int 
}
// 15
#include <stdio.h>
#include <stdlib.h>
int main(void) {
}
// 16
#include <stdio.h>
#include <stdlib.h>
int main(void) {
}
// 17
#include <stdio.h>
#include <stdlib.h>
int main(void) {
}
// 18
#include <stdio.h>
#include <stdlib.h>
int main(void) {
}
// 19
#include <stdio.h>
#include <stdlib.h>
int main(void) {
}
// 20
#include <stdio.h>
#include <stdlib.h>
int main(void) {
}
// 21
#include <stdio.h>
#include <stdlib.h>
int main(void) {
}
// 22
#include <stdio.h>
#include <stdlib.h>
int main(void) {
}
// 23
#include <stdio.h>
#include <stdlib.h>
int main(void) {
}
// 24
#include <stdio.h>
#include <stdlib.h>
int main(void) {
}