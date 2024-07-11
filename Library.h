#ifndef LIBRARY_H
#define LIBRARY_H

// Class for a library
/*
  author    Yoan Gonzalez Perdomo
  version   1.0
  date      2024-06-20
*/

class Library{
	 // Private variables
      	/*
            books - vector what will storage the books
        */
	vector <Book> books;
	
	public:
        
        // Constructor of Library  with defaults parametrers
        /*
          * Parametrer:
          		vec(optional) - vector whit elements of type Book
		  * Use example: Library l1, l2(vec);
          * Description: Insert the specified books into the Library or initializes it empty .
        */
		Library(const vector<Book>& vec = {});
		
		// Method to insert a book into the libary
        /*
          * Parametrer: 
		  		book (Book)- the book has insert
          * Use example: l1.Insert(b);
          * Description: If the library is empty insert the book at the end. Else insert the book in the right place.
        */
		void Insert(Book book);
		
		// Overload of the method to insert a book into the libary with the data of the book.
        /*
          * Parametrers:
		  		_code (int) - the book code
		  		_title (string) - the book title
		  		_author (string) - the book author
		  		_amount (int) - the book amount
          * Use example: l1.Insert(1, "title", "author", 5);
          * Description: Create the book has insert with that dates. Then if the library is empty insert the book at the end. Else 
		  				 insert the book in the right place.
        */
		void Insert(const int& _code, const string& _author, const string& _title, const int& _amount);
		
		// Method to show the books into the libary
        /*
          * Use example: l1.Show();
          * Description: If the library is empty show an error mesangge. Else iterate whitin the library and prints the book data
        */
		void Show();
		
		// Method to delete a book from the library, having the title and the author of the book
        /*
          * Parametrers:
      			_title (string) - the book title
		  		_author (string) - the book author
	      * Use example: l1.Remove("title", "author");
          * Description: If the library is empty show an error mesangge. Else iterate whitin the library searching a book with that
		   				 data, if the book is found then it is deleted, else show an error messange.
        */
		void Remove(const string& _title, const string& _author);
		
		// Method to show all books into the library by a specific author
        /*
          * Parametrers:
		  		_author (string) - the book author
	      * Use example: l1.ShowBooks("author");
          * Description: If the library is empty or do not exist into the library any book by that author show an error mesangge. Else 
		  				 iterate whitin the library and prints the data of the author's books.
        */
		void ShowBooks(const string& _author);
		
		// Method to find a book into the library by its code and return its data
        /*
          * Parametrers:
		  		_code (int) - the book code
	      * Use example: l1.FindBook(2);
	      * Return: The searchered book
          * Description: If the library is empty or do not exist into the library any book with that code show an error mesangge. 
		  				 Else iterate whitin the library and return the book whit that code
        */
		Book FindBook(const int& _code);
		
		// Method to lend a book of the library
        /*
          * Parametrers:
          		_title (string) - the book title
		  		_author (string) - the book author
	      * Use example: l1.Lend("title", "author");
          * Description: If the library is empty or do not exist into the library any book with that data show an error mesangge. 
		  				 Once found, if the amount minus the loan mount is greater than 3, then is lent.
        */
		void Lend(const string& _title, const string& _author);
		
		// Method to show all books into the library with a keyword
        /*
          * Parametrers:
		  		_keyword (string) - a keyword
	      * Use example: l1.ShowKey("keyword");
          * Description: If the library is empty or do not exist into the library any book with that keyword show an error mesangge. 
		  				 Else iterate whitin the library and return the books whit that keyword.
        */
		void ShowKey(string _keyword);
};

#endif
