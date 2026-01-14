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
		result[i] = (char*)calloc(ft_strlen(digits) + 1, sizeof(char));
		if (!result)
		{
			freeAll(result, i);
		}
	}

	//criando as iteracoes:
	
	int repeat = total;

	for (int i = 0; i < ft_strlen(digits); i++){
		int digit =  digits[i] - '0';

		char* letters;

		if (digit == 7)
			letters = "pqrs";
		else if (digit == 8)
			letters = "tuv";
		else if (digit == 9)
			letters = "wxyz";
		else if (digit == 2)
			letters = "abc";
		else if (digit == 3)
			letters = "def";
		else if (digit == 5)
			letters = "jkl";
		else
			letters = "mno";

		int letterCount = ft_strlen(letters);
		repeat  /= letterCount;

		for (int j = 0; j < total; j++)
		{
			int letterIndex = (j / repeat) % letterCount;
			result[j][i] = letters[letterIndex];
		}
	
	}

	return result;
}

int main(void)
{
	int returnSize;

	char** result = letterCombinations("23", &returnSize);
	
	for (int i = 0; i < returnSize; i++){
		printf("%s\n", result[i]);
	}
}
