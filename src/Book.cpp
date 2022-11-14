#include "Book.h"

 ISBN10 Book::getIsbn() {
    return isbn_;
}

 std::string Book::getTitle() {
    return title_;
}

 std::string Book::getFirstname() {
    return firstname_;
}

 std::string Book::getLastname()  {
    return lastname_;
}

 Date Book::getCopyrightDate() {
    return copyrightDate_;
}
void Book::returnBook(){
    status_ = false;
}
bool Book::isLent() const {
    return status_;
}
void Book::lendBook() {
    if(status_) throw std::invalid_argument("Cannot lend this book: it's already lent.");
    status_ = true;
}

void Book::setIsbn(const ISBN10 &isbn) {
    isbn_ = isbn;
}

void Book::setTitle(const std::string &title) {
    title_ = title;
}

void Book::setFirstname(const std::string &firstname) {
    firstname_ = firstname;
}

void Book::setLastname(const std::string &lastname) {
    lastname_ = lastname;
}

void Book::setCopyrightDate(const Date &copyrightDate) {
    copyrightDate_ = copyrightDate;
}


std::ostream &operator<<(std::ostream &out,  const Book  &book){
    out << book.title_ << '\n' << book.firstname_ << " " << book.lastname_ << "\n" << book.isbn_ << "\n" << book.copyrightDate_;
}
bool operator==( const Book &book,const  Book &other){
    return book.isbn_ == other.isbn_;
}

bool operator!=(const Book &book,const Book &other){
    return !(book == other);
}



