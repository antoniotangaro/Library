//
// Created by Mouhi on 14/11/2022.
//

#ifndef LIBRARY_ISBN10_H
#define LIBRARY_ISBN10_H

#include <string>

class ISBN10 {
private:
    int isbn_[];

    static constexpr int ISBN10_SIZE = 10;

public:
    // controllo solo del formato
    static bool isValidISBN10Format(std::string isbn10);
    static bool isValidISBN10Format(ISBN10 const &isbn10);
public:
    ISBN10(std::string const &isbn10);

    ISBN10(int groupIdentifier, int publisherIdentifier, int titleIdentifier, int checkDigit);

    int getGroupIdentifier() const;

    int getPublisherIdentifier() const;

    int getTitleIdentifier() const;

    int getCheckDigit() const;

    // calculates check digit and compares it with checkDigit_
    bool isValidISBN();

    friend bool operator==(ISBN10 const &isbn10, ISBN10 const &other);
    friend bool operator!=(ISBN10 const &isbn10, ISBN10 const &other);
    friend bool operator<<(std::ostream& out, ISBN10 const &other);


private:
    ISBN10& stringToISBN10(std::string isbn10);
    int calculateCheckDigit();
};

#endif //LIBRARY_ISBN10_H