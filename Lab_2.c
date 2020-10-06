#include <stdio.h>
int main () {
	int a = 0, i = 0;
	while ((a = getchar()) != '\n') {
  	if (a == ' ' || a == '\t' ) {
    	i++;
    	} else {
          	if (i != 0){
              putchar(' ');
              putchar(' ');
          }
        putchar(a);
        i = 0;
      }
	}  
  return 0;
}
