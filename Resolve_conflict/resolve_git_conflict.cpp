#include <iostream>

typedef struct PersonData {
    int age;
    int id;
    const char *name;

    friend std::ostream &operator<<(std::ostream &os , const PersonData &data);
} PersonData;

std::ostream &operator<<(std::ostream &os , const PersonData &person)
{
    os << "id: " << person.id << " name: " << person.name;
    return os;
}

void printing() {
    PersonData p = {64, 0, "Bjarne Stroustrup"};
    std::cout << p << std::endl;
}