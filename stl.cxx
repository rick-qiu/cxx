#include <set>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
    set<int> si{1,2,3,5};
    si.erase(remove(si.begin(), si.end(), 3), si.end());
    return 0;
}
