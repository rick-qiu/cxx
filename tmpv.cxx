
#include <iostream>

using namespace std;

class Object {
public:
    Object() {
        cout << "Object::Object() was called" << endl;
    }
    Object(const Object& obj) {
        cout << "Object::Object(const Object& obj) was called" << endl;
    }
    Object(Object&& obj) {
        cout << "Object::Object(Object&& obj) was called" << endl;
    }
    Object& operator=(const Object& obj) {
        cout << "Object::operator=(const Object& obj) was called" << endl;
        return *this;
    }
    Object& operator=(Object&& obj) {
        cout << "Object::operator=(Object&& obj) was called" << endl;
    }
    void show() const {
        cout << "Object::show() was called" << endl;
    }
    ~Object() {
        cout << "Object::~Object() was called" << endl;
    }
};

Object make_object() {
    Object obj;
    return obj;
}

void use_object(const Object& obj) {
    obj.show();
}


int main(int argc, char *argv[]) {
    use_object(make_object());
    return 0;
}
