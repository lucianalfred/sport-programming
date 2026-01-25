#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(char* str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void freeAll(char** array, int n)
{
	while (n--)
	{
		free(array[n]);
	}
	array = NULL;

}

char** letterCombinations(char* digits, int *returnSize){
	
	if (ft_strlen(digits) == 0)
	{
		*returnSize = 0;
		return (NULL);
	}

	//calcularmos o numero de combinacoes/ tamanho total do array
	int total = 1;
	for (int i = 0; i < ft_strlen(digits); i++){
		int digit = digits[i] - '0';
		
		if (digit == 7 || digit == 9)
			total *= 4;
		else
			total *= 3;
	}

	*returnSize = total;

	//alocamos a matriz/ array resultante
	
	char** result = (char**)malloc(total * sizeof(char *));
	if (!result) return (NULL);

	//usamos calloc para alocar e inicializar as string da matriz com 0/
	

	for (int i = 0; i < total; i++){
		resutl[i] = (char*)calloc(ft_strlen(digits) + 1, sizeof(char));
		if (!result)
		{
			freeAll(result, i);
		}
	}

	//criando as iteracoes:
	


}
