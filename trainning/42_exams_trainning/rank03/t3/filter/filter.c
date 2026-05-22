#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc != 2) return 1;
    
    char buffer[4096];
    int target_len = strlen(argv[1]);
    int bytes, i, j;
    char* asteriscos;
    
    // Cria string de asteriscos do tamanho correto
    asteriscos = malloc(target_len);
    for (i = 0; i < target_len; i++)
        asteriscos[i] = '*';
    
    while ((bytes = read(0, buffer, sizeof(buffer))) > 0)
    {
        i = 0;
        while (i < bytes)
        {
            // Verifica coincidência
            j = 0;
            while (j < target_len && i + j < bytes && buffer[i + j] == argv[1][j])
                j++;
            
            if (j == target_len)
            {
                write(1, asteriscos, target_len);
                i += target_len;
            }
            else
            {
                write(1, &buffer[i], 1);
                i++;
            }
        }
    }
    
    free(asteriscos);
    return 0;
}