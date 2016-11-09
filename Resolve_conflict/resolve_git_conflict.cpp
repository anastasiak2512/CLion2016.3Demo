#include <iostream>

typedef struct PersonData {
    int age;
    int id;
    const char *name;

    friend std::ostream &operator<<(std::ostream &os , const PersonData &data);
} PersonData;

std::ostream &operator<<(std::ostream &os , const PersonData &data, bool print_flag)
{
    os << "id: " << data.id << " name: " << data.name;
    return os;
}

void printing() {
    PersonData p = {64, 0, "Bjarne Stroustrup"};
    std::cout << p << std::endl;
}
