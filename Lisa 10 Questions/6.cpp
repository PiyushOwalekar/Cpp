#include <iostream>
#include <string>
#include <iomanip>

class Book {
public:
    std::string title;
    std::string author;
    double price;

    void setDetails(std::string bTitle, std::string bAuthor, double bPrice) {
        title = bTitle;
        author = bAuthor;
        price = bPrice;
    }

    void displayDetails() {
        std::cout << "\n--- Book Details ---" << std::endl;
        std::cout << "Title: " << title << std::endl;
        std::cout << "Author: " << author << std::endl;
        std::cout << "Price: $" << std::fixed << std::setprecision(2) << price << std::endl;
    }
};

int main() {
    Book book1;

    book1.setDetails("The Hitchhiker's Guide to the Galaxy", "Douglas Adams", 12.99);

    book1.displayDetails();

    Book book2;
    book2.setDetails("Pride and Prejudice", "Jane Austen", 9.50);
    book2.displayDetails();

    return 0;
}
