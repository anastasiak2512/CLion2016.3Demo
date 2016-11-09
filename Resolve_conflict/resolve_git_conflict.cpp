#include <iostream>

class PersonData {
private:
    int age;
    int id;
    const char *name;

public:
    void printing(int type) {
        if (type) {
            std::cout << this << std::endl;
        } else {
            std::cout << "Contact name: " << name;
        }
    }

public:
    PersonData(int age , int id , const char *name) : age(age) , id(id) , name(name)
    {}

    friend std::ostream &operator<<(std::ostream &os , const PersonData &data)
    {
        os << "age: " << data.age << " id: " << data.id << " name: " << data.name;
        return os;
    }
};

void usage () {
    PersonData p = PersonData(64, 0, "Bjarne Stroustrup");

    
}
