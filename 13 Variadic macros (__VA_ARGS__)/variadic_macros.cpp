// Library stdio.h merupakan library standart input dan output yang dimiliki oleh bahasa c
#include <stdio.h>
#define EMPTY

//printf () merupakam fungsi cetak ke console yang terdapat pada library stdio.h
#define CHECK1(x, ...) if (!(x)) { printf(__VA_ARGS__); }
#define CHECK2(x, ...) if ((x)) { printf(__VA_ARGS__); }
#define CHECK3(...) { printf(__VA_ARGS__); }
#define MACRO(s, ...) printf(s, __VA_ARGS__)

int main() {
    CHECK1(0, "here %s %s %s", "are", "some", "varargs1(1)\n");
    CHECK1(1, "here %s %s %s", "are", "some", "varargs1(2)\n");   // Tidak diprint

    CHECK2(0, "here %s %s %s", "are", "some", "varargs2(3)\n");   // Tidak diprint
    CHECK2(1, "here %s %s %s", "are", "some", "varargs2(4)\n");

    // Selalu menggunakan fungsi printf
    CHECK3("here %s %s %s", "are", "some", "varargs3(5)\n");

    MACRO("hello", "world\n");

    MACRO("error\n",""); // would cause error C2059, except VC++
                             // suppresses the trailing comma
}
