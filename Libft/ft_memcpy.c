










#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t count){
    
    
    size_t i;
    char *s = (char *)src;
    char *d = (char *)dest;
    
    i = 0;
    
    if (!src && !dest)
        return NULL;
    
    while(i < count ){
        d[i] = s[i];
        i++;
    }
    
    return dest;
    
    
}

// int main() {
    
    
//     char src[10] = "asdgfdgrrj";

//     char dest[10] = "";

//     ft_memcpy(dest,src,sizeof(src));

//     printf("dest = %s\n", dest);
//     return 1;
// }