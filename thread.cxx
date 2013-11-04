
#include <cstdio>

#include <thread>
#include <iostream>
#include <chrono>

// $CXX -std=c++11 -lpthread -g thread.cxx -o test
int main(int argc, char *argv[]) {
    using namespace std;
    printf("the number of hard cores: %d\n", thread::hardware_concurrency());
    chrono::milliseconds dura(2000);
    thread t([](const chrono::milliseconds& dura){ while(true) {printf("wait for a duration\n"); this_thread::sleep_for(dura);}}, dura);
    t.join();
    return 0;
}
