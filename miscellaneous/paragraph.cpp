#include <iostream>
#include <string>

int main() {
    std::cout << "Enter a paragraph:\n";

    // Declare a string to store the paragraph
    std::string paragraph;

    // Read the entire line of text (paragraph) from the user
    std::getline(std::cin, paragraph);

    // Display the paragraph back to the user
    std::cout << "You entered:\n" << paragraph << std::endl;

    return 0;
}