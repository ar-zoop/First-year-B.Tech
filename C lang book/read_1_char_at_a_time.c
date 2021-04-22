#include <stdio.h> 
int main (void) { 
int c, nc = 0; 
while ((c = getchar ()) != EOF) { 
++nc; 
printf ("Character read: %02x\n", (unsigned) c); 
} 
printf ("Number of chars: %d\n", nc); 
}
