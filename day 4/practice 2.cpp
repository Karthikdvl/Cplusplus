#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    double price;
    std::string publisher;
    int stock;
    int successfulTransactions;
    int unsuccessfulTransactions;

    void updatePrice(double newPrice) {
        price = newPrice;
    }

public:

    Book(const std::string& bookTitle, const std::string& bookAuthor, double bookPrice, const std::string& bookPublisher, int initialStock)
        : title(bookTitle), author(bookAuthor), price(bookPrice), publisher(bookPublisher), stock(initialStock), successfulTransactions(0), unsuccessfulTransactions(0) {
    }

    void sellBook(const std::string& customerTitle, const std::string& customerAuthor, int numCopies) {
        if (title == customerTitle && author == customerAuthor && stock >= numCopies) {
            double totalCost = numCopies * price;
            std::cout << "Book Details:\nTitle: " << title << "\nAuthor: " << author << "\nPrice: " << price
                      << "\nPublisher: " << publisher << "\nAvailable Stock: " << stock << "\nTotal Cost: " << totalCost << std::endl;
            stock -= numCopies;
            successfulTransactions++;
        } else {
            std::cout << "Book not available or insufficient stock." << std::endl;
            unsuccessfulTransactions++;
        }
    }

    void updateBookPrice(double newPrice) {
        updatePrice(newPrice);
    }


    void displayTransactionStatistics() {
        std::cout << "Successful Transactions: " << successfulTransactions << "\nUnsuccessful Transactions: " << unsuccessfulTransactions << std::endl;
    }
};

int main() {
    Book book1("Book Title 1", "Author 1", 25.0, "Publisher A", 10);

    std::string customerTitle, customerAuthor;
    int numCopies;

    std::cout << "Enter book title: ";
    std::cin >> customerTitle;
    std::cout << "Enter author: ";
    std::cin >> customerAuthor;
    std::cout << "Enter number of copies required: ";
    std::cin >> numCopies;

    book1.sellBook(customerTitle, customerAuthor, numCopies);

    double newPrice;
    std::cout << "Enter new price: ";
    std::cin >> newPrice;
    book1.updateBookPrice(newPrice);

    book1.displayTransactionStatistics();

    return 0;
}

