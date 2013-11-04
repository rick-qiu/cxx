
struct Error {
    int error_number;
    Error(int n): error_number(n) {}
};

double f1(int a) {
    if(a <= 0)
        throw Error(1);
    return 1.0 / a;
}

double f2(int a) {
    if(a <= 0)
        throw Error(2);
    return 2.0 / a;
}

double f3(int a) {
    if( a <= 0)
        throw Error(3);
    return 3.0 / a;
}

int g(int x, int y, int z) {
    try {
        return f1(x) + f2(y) + f3(z);
    } catch(Error& err) {
    }
}
