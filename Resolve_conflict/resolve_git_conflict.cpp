#include <iostream>

class PersonData {
private:
    int age;
    int id;
    const char *name;

    //Introduce nonoverlapping changes on one line.
    //For example, remove public identifier externally
    //and change function parameter in the IDE. Try to push
    //and get a special resolve icon in the merge dialog.
    //Click the icon to have the conflict resolved by the IDE.
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
