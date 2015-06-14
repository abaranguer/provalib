#include <stdlib.h>
#include <stdio.h>
#include <dlfcn.h>

int main(int argc, char **argv) {
    void *handle;
    int (*fun1)(int);   /* extern int funcio1(int val); */
    int (*fun2)(int);   /* extern int funcio2(int val); */
    char *error;
    int ret1;
    int ret2;
    
    handle = dlopen ("libprova.so.1", RTLD_LAZY);
    if (!handle) {
        fputs (dlerror(), stderr);
        exit(1);
    }
    
    fun1 = dlsym(handle, "funcio1");
    if ((error = dlerror()) != NULL)  {
        fputs(error, stderr);
        exit(1);
    }

    fun2 = dlsym(handle, "funcio2");
    if ((error = dlerror()) != NULL)  {
        fputs(error, stderr);
        exit(1);
    }

    printf("Sortida de funcio1(3)\n");
    ret1 = (*fun1)(3);
    printf("\nSortida de funcio2(7)\n");
    ret2 = (*fun2)(7);
    printf("\nret1: %d; ret2: %d\n\n", ret1, ret2);

    dlclose(handle);
}
