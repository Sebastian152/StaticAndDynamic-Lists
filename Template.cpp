#include "Template.hpp"

Template::Template() {
    this->number = 0;
}

Template::Template(int number) {
    this->number = number;
}

void Template::setNumber(int number) {
    this->number = number;
}

int Template::getNumber() {
    return number;
}