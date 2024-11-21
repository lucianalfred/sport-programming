#include <stdio.h>
#include <string.h>

int main()
{
    char positions[101];

    scanf("%s",positions);

    int size = strlen(positions);
    int p = 1;

    char current_position = positions[0];

    for (int i = 0; i < size; ++i){
            if(current_position == positions[i]){
                p++;
                if (p >= 7)
                {
                    printf("YES\n");
                    return 0;

                }
                
            }else{
                current_position = positions[i]; 
                p = 1;
            }
          
    }
    printf("NO\n");

    return 0;

}
