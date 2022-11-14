#include "Date.h"

Date::Date(int year, int month, int day) : day_(day), month_(month), year_(year) {
    if(!isValidDate(year, month, day)) throw std::invalid_argument("");
}

Date::Date(const Date &other) {
    year_ = other.year_;
    month_ = other.month_;
    day_ = other.day_;
}

std::string Date::toStringISO8601() const{
    // lo standard ISO8601 definisce la data come yyyy/mm/dd
    return std::to_string(year_) + "/" + std::to_string(month_) + "/" +std::to_string( day_);
}
std::string Date::format(std::string format) const{

}
