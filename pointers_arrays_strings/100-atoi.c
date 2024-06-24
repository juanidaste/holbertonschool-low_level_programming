int _atoi(char *s) {
    int signo = 1;
    int resultado = 0;

    while (*s!= '\0') {
        if (*s == '-') {
            signo = -signo;
        } else if (*s == '+') {
            signo = signo; // no hacemos nada, solo ignoramos el +
        } else if (*s >= '0' && *s <= '9') {
            resultado = resultado * 10 + (*s - '0');
        } else if (resultado!= 0) {
            break; // hemos encontrado un número, paramos de parsear
        }
        s++;
    }

    return signo * resultado;
}
