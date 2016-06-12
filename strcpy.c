void strcpy1(char dest[], const char source[]) {
	int i = 0;
	while (1) {
      dest[i] = source[i];
      if (dest[i] == '\0') break;
      i++;
	} 
}

void strcpy2(char dest[], const char source[]) {
	int i = 0;
	while ((dest[i] = source[i]) != '\0')
         i++;
}