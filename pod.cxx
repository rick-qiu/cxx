
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <cstring>
#include <cstdio>

#include <iostream>

using namespace std;

struct pod_t0 {
};

struct alignas(8) subpod_t {
    int i;
};

struct pod_t {
    char ch;
    alignas(16) int i;
    subpod_t subobj;
};

void size_alignment (){
    printf("size and alignment of primitive types\n\n");
    printf("size of bool:               %4d, alignment of bool:               %4d\n", sizeof(bool), alignof(bool));
    printf("size of signed char:        %4d, alignment of signed char:        %4d\n", sizeof(signed char), alignof(signed char));
    printf("size of unsigned char:      %4d, alignment of unsigned char:      %4d\n", sizeof(unsigned char), alignof(unsigned char));
    printf("size of signed wchar_t:     %4d, alignment of signed wchar_t:     %4d\n", sizeof(signed wchar_t), alignof(signed wchar_t));
    printf("size of unsigned wchar_t:   %4d, alignment of unsigned wchar_t:   %4d\n", sizeof(unsigned wchar_t), alignof(unsigned wchar_t));
    printf("size of signed short:       %4d, alignment of signed short:       %4d\n", sizeof(signed short), alignof(signed short));
    printf("size of unsigned short:     %4d, alignment of unsigned short:     %4d\n", sizeof(unsigned short), alignof(unsigned short));
    printf("size of signed int:         %4d, alignment of signed int:         %4d\n", sizeof(signed int), alignof(signed int));
    printf("size of unsigned int:       %4d, alignment of unsigned int:       %4d\n", sizeof(unsigned int), alignof(unsigned int));
    printf("size of signed long:        %4d, alignment of signed long:        %4d\n", sizeof(signed long), alignof(signed long));
    printf("size of unsigned long:      %4d, alignment of unsigned long:      %4d\n", sizeof(unsigned long), alignof(unsigned long));
    printf("size of signed long long:   %4d, alignment of signed long long:   %4d\n", sizeof(signed long long), alignof(signed long long));
    printf("size of unsigned long long: %4d, alignment of unsigned long long: %4d\n", sizeof(unsigned long long), alignof(unsigned long long));
    printf("size of float:              %4d, alignment of float:              %4d\n", sizeof(float), alignof(float));
    printf("size of double:             %4d, alignment of double:             %4d\n", sizeof(double), alignof(double));
    printf("size of long double:        %4d, alignment of long double:        %4d\n", sizeof(long double), alignof(long double));
    printf("size of void*:              %4d, alignment of void*:              %4d\n", sizeof(void*), alignof(void*));
    printf("\nend of size and alignment\n");
}

void pod2file() {
    const char* file_name = "/tmp/podtestingfile";
    auto fd = open(file_name, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
    int num = 100;
    for(int i = 0; i < num; ++i) {
        pod_t obj;
        obj.ch = 'a';
        obj.i = 100;
        write(fd, &obj, sizeof(obj));
    }
    close(fd);
    struct stat file_stat;
    memset(&file_stat, 0, sizeof(file_stat));
    stat(file_name, &file_stat);
    unlink(file_name);
    printf("alignment of POD object: %d\n", alignof(pod_t));
    printf("size of each POD object: %d, number of objects: %d, file size: %d\n", sizeof(pod_t), num, file_stat.st_size);
}

int main(int argc, char* argv[]) {
    size_alignment();
    pod2file();
    return 0;
}
