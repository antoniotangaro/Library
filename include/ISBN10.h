#ifndef LIBRARY_ISBN10_H
#define LIBRARY_ISBN10_H

#include <string>

class ISBN10 {

    /*
        ISBN in the format "n_1 - n_2 - n_3 - x"
        
        n_1 represents the group identifier of the country/region.

        n_2 represents the author of the book (publish identifier).

        n_3 represents the edition of the book (title identifier).
        
        x represents the control number (check digit).
    */

    static constexpr int ISBN10_SIZE = 10;
    int x, n_1, n_2, n_3;
    int isbn_local_variable[ISBN10_SIZE];

    public:
        ISBN10 (std::string isbn);

        bool FormatValidation(std::string isbn, char a[13]);    //format Validation (return true if the format is valid, false otherwise).
    
    public:
        std::string get_isbn();   //returns ISBN in a string, separating the four characters by a '-' character.

        int getGroupIdentifier();

        int getPublisherIdentifier();

        int getTitleIdentifier();

        int getCheckDigit();

        void set_isbn10(std::string isbn);    //assigns a new value to the ISBN.

        bool equals(std::string isbn);  //checks whether two ISBNs are the same (returns true if they are the same, false if they are different).


    private:
        bool string_toISBN10(std::string str);  //method that converts the string to an array of int (useful for management), returns true if the operation was successful.
        void set_ISBN10(int n1, int n2, int n3, int y);
        int calculateCheckDigit(char a[13]);
};

#endif //LIBRARY_ISBN10_H