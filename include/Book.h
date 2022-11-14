#ifndef LIBRARY_BOOK_H
#define LIBRARY_BOOK_H

#include <string>
#include <stdexcept>
#include <ostream>


#include "ISBN10.h"
#include "Date.h"

class Book {
private:
    ISBN10 isbn_;
    std::string title_;
    std::string firstname_;
    std::string lastname_;
    Date copyrightDate_;
    bool status_;
public:
    Book(const ISBN10 isbn, const std::string &title, const std::string &firstname, const std::string &lastname,
         const Date &copyrightDate, bool status);

    Book(const ISBN10 isbn, const std::string &title, const std::string &firstname, const std::string &lastname,
         const Date &copyrightDate);

    friend bool operator==(const Book &book, const Book &other);

    friend bool operator!=(const Book &book, const Book &other);

    friend std::ostream &operator<<(std::ostream &out, const Book &book);

    // getters
    ISBN10 getIsbn();

    std::string getTitle();

    std::string getFirstname();

    std::string getLastname();

    Date getCopyrightDate();

    // funzioni per registrare il prestito e la restituzione
    bool isLent() const;

    void lendBook();

    void returnBook();

    // setters

    void setIsbn(const ISBN10 &isbn);

    void setTitle(const std::string &title);

    void setFirstname(const std::string &firstname);

    void setLastname(const std::string &lastname);

    void setCopyrightDate(const Date &copyrightDate);
};

#endif //LIBRARY_BOOK_H
