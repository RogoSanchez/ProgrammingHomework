#ifndef BOOK_H
#define BOOK_H

#include<string.h>
class Book
    {
    private:
        int Code;
        string Title;
        string Author;
        int Amount;
        int inLoan;
        vector<string>keyWords;


    public:
        Book(int ,string , string, int, vector<string>&);

        //Getters
        int getCode(); 
        string getTitle();
        string getAuthor();
        int getAmount();
        int getinLoan();
        vector<string>getKeywords();
        

        //Operators
        friend istream &operator>>(istream &,Book &);
        friend ostream &operator<<(ostream &,Book &);
        
        //Setters
        void SetCode(); 
        void SetTitle(); 
        void SetAuthor(); 
        void SetAmount();
        void SetinLoan();
        void SetAmount(const int& _Amount);
        void SetinLoan(const int& _inLoan);
    };
    
#endif

