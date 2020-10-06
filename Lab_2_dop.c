#include <stdio.h>
int main () {
	int a = 0;
	while ((a = getchar()) != '\n') {
    	int i = 0;
		if (a == ' '){
      		i++;
      		int j = 2*i;
      		while(j != 1) {
          		putchar(' ');
          		j--;
      		}
  		}
  
		putchar(a);
	}  
  return 0;
}
