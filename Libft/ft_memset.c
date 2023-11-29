










// sets all bytes of the specified memory block to the specified value

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len){
    
    
    size_t i;
    unsigned char *str;
    
    i = 0;
    
    str = (unsigned char *)b;
    
    while(i < len){
        str[i++] = (unsigned char)c;
    }
    return (b);
}



// int main(void){
    
//     char ex[10];
    

//     ft_memset(ex, 'a', sizeof(ex));
    
//     for (int i = 0; i < 10; i++)
//         printf("%c", ex[i]);
    
//     printf("\n");
    
//     return 0;
// }