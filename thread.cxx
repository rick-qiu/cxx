
#include <cstdio>

#include <thread>
#include <iostream>
#include <chrono>

int main(int argc, char *argv[]) {
    using namespace std;
    printf("the number of hard cores: %d\n", thread::hardware_concurrency());
    chrono::milliseconds dura(2000);
    thread t([](){ printf("wait for a duration\n");});
    return 0;
}
