#include <iostream>
#include "Template.hpp"

int main() {
    Template t(1);

    std::cout << "Template number is: " << t.getNumber() << std::endl << std::endl;

    return 0;
}

// To run this code with visual studio code
// 1.- Press CTRL + P.
// 2.- Type in the keyboard ">Run Task" and Select "Tasks: Run Task".
// 3.- Run the task called "Build and Run all".

// If you want a snippet to run this task faster you can bind
// the task to a key of your keyboard, or a special mouse button