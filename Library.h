#ifndef LIBRARY_H
#define LIBRARY_H

//! Class for a library
/*!
  author\    Yoan Gonzalez Perdomo
  version\   1.0
  date\      2024-06-20
*/

class Library{
	 //! A private variable
      	/*
            books - a vector what will storage the books
        */
	vector <Book> books;
	
	public:
        
        //! Constructor of Library  with defaults parametrers
        /*!
          *\ param [in] vec Vector whit elements of type Book
		  *\ usage: Library l1, l2(vec);
          * Insert the specified books into the Library or initializes it empty .
        */
		Library(const vector<Book>& vec = {});
		
		//! Method to insert a book into the libary
        /*!
          * \param [in] book The book has insert
          * \usage: l1.Insert(b);
          * If the library is empty insert the book at the end. Else insert the book in the right place.
        */
		void Insert(Book book);
		
		//! Overload of the method to insert a book into the libary with the data of the book.
        /*!
          * \param _code [in] The book code
		  * \param _title [in] The book title
		  * \param _author [in] The book author
		  * \param _amount [in] The book amount
		  * \param key1 [in] A Keyword
		  * \param key2 [in] A Keyword
		  * \param key3 [in] A Keyword
          * Create the book has insert with that dates. Then if the library is empty insert the book at the end. Else insert the book in the right place.
        */
		void Insert(const int& _code, const string& _title, const string& _author, const int& _amount, const string& key1, const string& key2, const string& key3);
		
		//! Method to show the books into the libary
        /*!
          * \usage: l1.Show();
          * If the library is empty show an error mesangge. Else iterate whitin the library and prints the book data.
        */
		void Show();
		
		//! Method to delete a book from the library, having the title and the author of the book
        /*!
          * \param _title [in] The book title
		  * \param _author [in] The book author
	      * \usage: l1.Remove("title", "author");
          * If the library is empty show an error mesangge. Else iterate whitin the library searching a book with that data, if the book is found then it 
		    is deleted, else show an error messange.
        */
		void Remove(const string& _title, const string& _author);
		
		//! Method to show all books into the library by a specific author
        /*
          * \param _author [in] The book author
	      * \usage: l1.ShowBooks("author");
          * If the library is empty or do not exist into the library any book by that author show an error mesangge. Else iterate whitin the library and 
		    prints the data of the author's books.
        */
		void ShowBooks(const string& _author);
		
		//! Method to find a book into the library by its code and return its data
        /*!
          * \param _code [in] The book code
	      * usage: l1.FindBook(2);
	      * return\ The searchered book
          * If the library is empty or do not exist into the library any book with that code show an error mesangge. Else iterate whitin the library and 
		    return the book whit that code
        */
		Book FindBook(const int& _code);
		
		//! Method to lend a book of the library
        /*!
          * \param _title [in] The book title
		  	\param _author [in] The book author
	      * usage: l1.Lend("title", "author");
          * If the library is empty or do not exist into the library any book with that data show an error mesangge. Once found, if the amount minus the 
		    loan mount is greater than 3, then is lent.
        */
		void Lend(const string& _title, const string& _author);
		
		//! Method to show all books into the library with a keyword
        /*!
          * \param _keyword (string) - a keyword
	      * \usage: l1.ShowKey("keyword");
          * If the library is empty or do not exist into the library any book with that keyword show an error mesangge. Else iterate whitin the library and
		    return the books whit that keyword.
        */
		void ShowKey(string _keyword);
};

#endif
