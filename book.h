#ifndef BUK_H
#define NUK_H

class book
{
    string book_author;
    string book_category;
    int book_pages;
    bool book_lent;
public:

    book(string author = "",string cat = "", int pages = 0, bool lent = false): book_author(author), book_category(cat), book_pages(pages), book_lent(lent) {};

    friend ostream& operator << (ostream &o, book &a)
    {
        o << a.book_author << ", " << a.book_category << ", " << a.book_pages << " pages, ";
        a.book_lent ? o << "Available" : o << "Not available";
        return o;
    }

    bool is_available()
    {
        return book_lent;
    }

};
#endif // BUK_H
