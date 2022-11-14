#ifndef LIBRARY_DATE_H
#define LIBRARY_DATE_H

#include <string>
#include <stdexcept>

class Date {
private:
    int day_;
    int month_;
    int year_;
public:
    static bool isLeapYear();
    static bool isValidDate(int year, int month, int day);
    static std::string getDayName(Date const &date);

public:
    Date(const Date &other);

    Date(int year, int month, int day);

    std::string toStringISO8601() const;
    std::string format(std::string format) const;

    // TODO: Define inline
    int getDay() const {
        return day_;
    }

    int getMonth() const {
        return month_;
    }

    int getYear() const {
        return year_;
    }

    Date &setDate(int year, int month, int day);

    Date &setYear(int year);

    Date &setMonth(int month);

    Date &setDay(int day);

    // Optional to implement, if we have time we could implement these
    // Pay attention to leap years and bounds
    Date &addDays(int days);

    Date &addMonths(int months);

    Date &addYear(int years);

    int diff(Date &other);

// NB: To overload +,- it's better define Duration class to handle durations
    friend bool operator<=(Date const &date, Date const &other);

    friend bool operator==(Date const &date, Date const &other);

    friend bool operator>(Date const &date, Date const &other);

    friend bool operator>=(Date const &date, Date const &other);

    friend bool operator<(Date const &date, Date const &other);


};

// we could use an enumeration to represent weekdays and months
#endif //LIBRARY_DATE_H
