#include <assert.h>
#include <string.h>
#include <ctype.h>

#include "password_checker.h"


/* Returns true if the length of PASSWORD is at least 10, false otherwise */
bool check_length(const char *password) {
    return strlen(password) >= 10;
    /*int length = strlen(password);
    bool meets_len_req = (length >= 10);
    return meets_len_req;*/
}

/* Returns true if PASSWORD contains at least one upper case letter, false otherwise */
bool check_upper(const char *password) {
    while (*password != '\0') {
        if (isupper(*password)) {
            return true;
        }
        ++password;
    }
    return false;
}
/*
bool check_upper(const char *password) {
    while (*password != '\0') {

        bool is_in_range = check_range(*password, 'A', 'Z');
        if (is_in_range) {
            return true;
        }
        ++password;
    }
    return false;
}
*/

/* Returns true if PASSWORD contains at least one lower case letter, false otherwise*/
bool check_lower(const char *password) {
    while (*password != '\0') {
        if (islower(*password)){
            return true;
        }
        /*
        bool is_in_range = check_range(*password, 'a', 'z');
        if (is_in_range) {
            return true;
        }*/
        ++password;
    }
    return false;
}

bool check_range(char letter, char lower, char upper);

/* Returns true if LETTER is in the range [LOWER, UPPER], false otherwise*/
bool check_range(char letter, char lower, char upper) {
    bool is_in_range = (letter >= lower && letter <= upper);
    return is_in_range;
}


/* Returns true if PASSWORD contains at least one number, false otherwise */
bool check_number(const char *password) {
    while (*password != '\0') {
        if (isdigit(*password)){
            return true;
        }
        /*
        if (check_range(*password, '0', '9')) {
            return true;
        }*/
        ++password;
    }
    return false;
}

/* Returns true if the person's first and last name are NOT in the password, false otherwise */
bool check_name(const char *first_name, const char *last_name, const char *password) {
    /* Type "man strstr" in your terminal to learn what strstr does!
        To exit the man pages, press 'q' */
    /* Hint: a NULL pointer will evaluate to False in a logical expression while a non-NULL pointer
        will evaluate to True */
    const char *first = strstr(password, first_name);
    const char *last = strstr(password, last_name);
    return (!first && !last);
}

/* Returns true if PASSWORD meets the conditions specified above */
bool check_password(const char *first_name, const char *last_name, const char *password) {
    bool length, upper, lower, number, name;
    lower = check_lower(password);
    upper = check_upper(password);
    length = check_length(password);
    /*name = check_name(first_name, last_name, password);*/
    number = check_number(password);
    /*upper = check_upper(password);*/
    name = check_name(first_name, last_name, password);
    return (lower && length && name && upper && number);
}
