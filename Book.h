#ifndef BOOK_H
#define BOOK_H

//! Class for a library
/*!
    * /@author   Roberto Gallardo Sanchez
    * /@version   1.0
    * /@date      2024-06-20
*/
class Book
    {

    //! A private variable
    /*
        Code -> Code of books
        Title -> Titles of books
        Author -> Authors of books
        Amount -> Total Amount of the books
        inLoan -> Total Amount of the books in Loan
        keyWords -> vector to safe Book's keywords
        
    */
    private:
        int Code;
        string Title;
        string Author;
        int Amount;
        int inLoan;
        vector<string>keyWords;


    public:
    //! Constructor of Library  with defaults parametrers
        /*!
          *\ @param [in] _Code- code of books
          *\ @param [in] _Title -> Titles of books
          *\ @param [in] _Author -> Authors of books
          *\ @param [in] _Amount -> Total Amount of the books
          *\ @param [in] _keyWords -> vector to safe Book's keywords
		  *\ 
          * Insert the specified books or initializes it empty .
        */

        Book(int ,string , string, int,const vector<string>&keyWords);

        //Getters

        //! Method to get a code 
        /*!
          * @return int Code of class book
        */
        int getCode(); 
        

        //! Method to get a Title of the book
        /*!
          * @return string Title of class book
        */
        string getTitle();


        //! Method to get a Author of the book 
        /*!
          * @return string Author of class book 
        */
        string getAuthor();


        //! Method to get a Amount of the book
        /*!
          * @return int Amount of class book
        */

        int getAmount();


        //! Method to get the amount of the books in Loan
        /*!
          * @return int inLoan of class book
        */
        int getinLoan();


        //! Method to get a keywords vector 
        /*!
          * @return vector<string>getKeywords of class book
        */
        vector<string>getKeywords();
        

        //Operators

        //! Overload of operator >>
        /*!
          * @param input [in] 
		  * @param B [in] a object of type Book
          * @return input
          *  This method allows us to modify the attributes of the book with the insertion operator
        */
        friend istream &operator>>(istream &,Book &);

        //! Overload of operator <<
        /*!
          * @param output [in] 
		  * @param B [in] a object of type Book
          * @return output
          * this method show all the book's properties with the operator of output(<<)
        */
        friend ostream &operator<<(ostream &,Book &);
        
        //Setters
//!Setter of Code
    /*!
    * @param _Code
    * @brief this method set Title with operator >>
    */
        void SetCode(); 
//!Setter of Title
    /*!
    * @param _Title
    * @brief this method set Title with operator >>
    */
        void SetTitle(); 
//!Setter of Author
    /*!
    *@param _Author
    *@brief this method set Author with operator >>
    */
        void SetAuthor(); 
//!Setter of Amount
    /*!
    * @param _Amount
    * @brief this method set Amount with operator >>
    */
        void SetAmount();
//!Setter of inLoan
    /*!
    * @param _inLoan
    * @brief this method set inLoan with operator >>
    */  
        void SetinLoan();
//!Setter of keywords
    /*!
    * @param key1 [in] 
    * @param key2 [in] 
    * @param key3 [in] 
    * @brief this method set the keywords with parameter
    */
        void SetKeywords(const string& key1, const string& key2, const string& key3);
//!Overload of method SetAmount
    /*!
    * @param _Amount [in] 
    * @brief this method set Amount with parameter
    */    
        void SetAmount(const int& _Amount);
//! Overload of method inLoan 
    /*!
    * @param _inLoan [in] 
    * @brief this method set inLoan with parameter
    */
        void SetinLoan(const int& _inLoan);
    };
    
#endif
