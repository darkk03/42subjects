




// sets all bytes of the specified memory block to zero

#include "libft.h"

// void* ft_memset(void* b, int c, size_t len);

void ft_bzero(void* s, size_t n){
    ft_memset(s, 0, n);
}


// void*	ft_memset(void* b, int c, size_t len){
    
    
//     size_t i;
//     unsigned char *str;
    
//     i = 0;
    
//     str = (unsigned char *)b;
    
//     while(i < len){
//         str[i++] = (unsigned char)c;
//     }
//     return b;
// }

// int main() {
    
    
//     char ex[10] = "asdgfdgrrj";


//     ft_bzero(ex, sizeof(ex));


//     for (int i = 0; i < sizeof(ex); i++) {
//         printf("%d ", ex[i]);
//     }

//     return 0;
// }