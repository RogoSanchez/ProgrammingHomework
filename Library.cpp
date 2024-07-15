#include"Library.h"
#include<bits/stdc++.h>
using namespace std;

//Implementation of the methods of the Library class

/*!
   *  \brief Constructor of Library  with defaults parametrers
   *  \author    Yoan Gonzalez Perdomo
   *  \version   1.0
   *  \date      2024-07-09
   *\ param [in] vec Vector whit elements of type Book
   *  \return  none
   *  \pre none
   *\ usage: Library l1, l2(vec);
   *  Insert the specified books into the Library or initializes it empty.
  */
Library::Library(const vector<Book>& vec){
	//The vec size is saved
	size_t vecsize = vec.size();
	
	//Iterates through VEC and insert your books into the library
	for(int i=0; i<vecsize; i++){
		Insert(vec[i]);
	}
}

/*!
   *  \brief Method to insert a book into the libary
   *  \author    Yoan Gonzalez Perdomo
   *  \version   1.0
   *  \date      2024-07-09
   *  \param [in] book The book has insert
   *  \return  none
   *  \pre book.getAmount() > 0
   * \usage: l1.Insert(b);
    * If the library is empty insert the book at the end. Else insert the book in the right place.
  */
  void Library::Insert(Book book){
	//If the amount is less than 1 then it is not inserted
	if(book.getAmount() < 1) return;
	
	//The size of the library is saved
	size_t siz= books.size();
	
	//If the library is empty, just insert the book at the end
	if(siz == 0){
		books.push_back(book);
		return;
	}
	//Else iterate the library searching the right place to the libarary 
	for(int i=0; i<siz; i++){
		
		//If the book's author is the same of one in the library then we iterate trought the books by that author
		if(book.getAuthor() == books[i].getAuthor()){
			int j = 0;
			
			for(j=i; j<siz; j++){
				if(book.getAuthor() != books[j].getAuthor()) break;
				
				//If the title of the book is minor than one in the library, then it is inserted before the book
				if(book.getTitle() < books[j].getTitle()){
					books.insert(books.begin()+j, book);
					return;
				}
			}
			
			//If the book is not minor than none then it is inserted after all author's books
			books.insert(books.begin()+j, book);
			return;
		}
		
		//If the book's author is minor than one in the library the it is inserted before the book
		if(book.getAuthor() < books[i].getAuthor()){
			books.insert(books.begin()+i, book);
			return;
		}
	}
	
	//In case the book is not minor or equal to any in the library then it is inserted after all books
	books.push_back(book);
}

/*!
   * \brief Overload of the method to insert a book into the libary with the data of the book.
   * \author    Yoan Gonzalez Perdomo
   * \version   1.0
   * \date      2024-07-09
   * \param _code [in] The book code
   * \param _title [in] The book title
   * \param _author [in] The book author
   * \param _amount [in] The book amount
   * \param key1 [in] A Keyword
   * \param key2 [in] A Keyword
   * \param key3 [in] A Keyword
   * \return  none
   * \pre _amount > 0
   * \usage: l1.Insert(1, "title", "author", 5);
   * Create the book has insert with that dates. Then if the library is empty insert the book at the end. Else insert the book in the right place.
  */
void Library::Insert(const int& _code = 0, const string& _title = "", const string& _author = "", const int& _amount= 0, const string& key1 = "", const string& key2 = "", const string& key3 = ""){
	//If the amount is less than 1 then it is not inserted
	if(_amount < 1) return;
	
	//We make a book with the data of the parametrers
	Book book(_code, _title, _author, _amount);
	
	book.SetKeywords(key1, key2, key3);
	
	//The size of the library is saved
	size_t siz = books.size();
	
	//If the library is empty, just insert the book at the end
	if(siz == 0){
		books.push_back(book);
		return;
	}
	//Else iterate the library searching the right place to the libarary 
	for(int i=0; i<siz; i++){
		
		//If the book's author is the same of one in the library then we iterate trought the books by that author
		if(book.getAuthor() == books[i].getAuthor()){
			int j = 0;
			
			for(j=i; j<siz; j++){
				if(book.getAuthor() != books[j].getAuthor()) break;
				
				//If the title of the book is minor than one in the library, then it is inserted before the book
				if(book.getTitle() < books[j].getTitle()){
					books.insert(books.begin()+j, book);
					return;
				}
			}
			
			//If the book is not minor than none then it is inserted after all author's books
			books.insert(books.begin()+j, book);
			return;
		}
		
		//If the book's author is minor than one in the library the it is inserted before the boo
		if(book.getAuthor() < books[i].getAuthor()){
			books.insert(books.begin()+i, book);
			return;
		}
	}
	
	//In case the book is not minor or equal to any in the library then it is inserted after all books
	books.push_back(book);
}

/*!
   * \brief Method to show the books into the libary
   * \author    Yoan Gonzalez Perdomo
   * \version   1.0
   * \date      2024-07-09
   * \param none
   * \return  none
   * \pre none
   * \usage: l1.Show();
   * If the library is empty show an error mesangge. Else iterate whitin the library and prints the book data.
  */
void Library::Show(){
	size_t siz= books.size();
	
	//If is the library is empty just show a message
	if(siz == 0) {
		cout<<"The library is empty\n";
		return;
	}
	
	//Else iterate trought the library and show the books data
	cout<<"The books are: \n";
	for(int i=0; i<siz; i++){
		cout<<books[i]<<'\n';
	}
}

/*!
   * \brief Method to delete a book from the library, having the title and the author of the book
   * \author    Yoan Gonzalez Perdomo
   * \version   1.0
   * \date      2024-07-09
   * \param _title [in] The book title
   * \param _author [in] The book author
   * \return  none
   * \pre none
   * \usage: l1.Remove("title", "author");
   * If the library is empty show an error mesangge. Else iterate trought the library searching a book with that data, if the book is found then it 
	 is deleted, else show an error messange.
  */
void Library::Remove(const string& _title, const string& _author){
	size_t siz= books.size();
	
	//If is the library is empty just show a message
	if(siz == 0) {
		cout<<"The library is empty\n";
		return;
	}
	
	//Else iterate trought the library
	for(int i=0; i<siz; i++){
		//If exists one book with that data then less in one the amount
		if(books[i].getTitle() == _title && books[i].getAuthor() == _author){
			books[i].SetAmount(books[i].getAmount()-1);
			
			//If amount reach 0 then the book it is deleted
			if(books[i].getAmount() == 0) books.erase(books.begin() + i);
			
			return;
		}
	}
	
	cout<<"Couldn't find the book to remove\n";
}

/*!
   * \brief Method to show all books into the library by a specific author
   * \author    Yoan Gonzalez Perdomo
   * \version   1.0
   * \date      2024-07-09
   * \param _author [in] The book author
   * \return  none
   * \pre none
   * \usage: l1.ShowBooks("author");
   * If the library is empty or do not exist into the library any book by that author show an error mesangge. Else iterate whitin the library and 
	 prints the data of the author's books.
  */
  void Library::ShowBooks(const string& _author){
	size_t siz= books.size();
	
	//If is the library is empty just show a message
	if(siz == 0) {
		cout<<"The library is empty\n";
		return;
	}
	
	//Else iterate within the library and show all books by the author
	cout<<"The books by "<<_author<<" are: \n";
	for(int i=0; i<siz; i++){
		if(_author == books[i].getAuthor()){
			for(int j=i; j<siz; j++){
				if(_author != books[j].getAuthor()) break;
				cout<<books[j]<<'\n';
			}
			return;
		}
	}
	
	//If do not exists any book of that actor show a massage
	cout<<"There aren't any book of that author\n";
}

/*!
   * \brief Method to find a book into the library by its code and return its data
   * \author    Yoan Gonzalez Perdomo
   * \version   1.0
   * \date      2024-07-09
   * \param _code [in] The book code
   * \return The searchered book
   * \pre none
   * usage: l1.FindBook(2);
   * If the library is empty or do not exist into the library any book with that code show an error mesangge. Else iterate whitin the library and 
	 return the book whit that code
  */
Book Library::FindBook(const int& _code){
	size_t siz= books.size();
	
	//If is the library is empty just show a message
	if(siz == 0) {
		cout<<"The library is empty\n";
		return 0;
	}
	
	//Else iterate within the library and show the book with that code
	for(int i=0; i<siz; i++){
		if(books[i].getCode() == _code) return books[i];
	}
	
	//If do not exists any book with that code just show a massage
	cout<<"Couldn't find any book with that code\n";
	return 0;
}

/*!
   * \brief Method to lend a book of the library
   * \author    Yoan Gonzalez Perdomo
   * \version   1.0
   * \date      2024-07-09
   * \param _title [in] The book title
   * \param _author [in] The book author
   * \return none
   * \pre amount - inLoan >= 3
   * usage: l1.Lend("title", "author");
   * If the library is empty or do not exist into the library any book with that data show an error mesangge. Once found, if the amount minus the 
	 loan mount is greater than 3, then is lent.
  */
void Library::Lend(const string& _title, const string& _author){
	size_t siz= books.size();
	
	//If is the library is empty just show a message
	if(siz == 0) {
		cout<<"The library is empty\n";
		return;
	}
	
	//Else iterate within the library
	for(int i=0; i<siz; i++){
		if(books[i].getTitle() == _title && books[i].getAuthor() == _author){
			//If exists a book with the data and the amount minus the loan amount is less than 3, then the book is loan
			if(books[i].getAmount() - books[i].getinLoan() >= 3){
				books[i].SetAmount(books[i].getAmount()-1);
				books[i].SetinLoan(books[i].getinLoan()+1);
				cout<<"The loan was completed successfully\n";
				return;
			}
			//Else show a massage
			else{
				cout<<"It is not possible to lend that book\n";
				return;
			}
		}
	}
	
	cout<<"Couldn't find the book to lend\n";
}

/*!
   * \brief Method to show all books into the library with a keyword
   * \author    Yoan Gonzalez Perdomo
   * \version   1.0
   * \date      2024-07-09
   * \param _keyword (string) - a keyword
   * \return none
   * \pre none 
   * \usage: l1.ShowKey("keyword");
   * If the library is empty or do not exist into the library any book with that keyword show an error mesangge. Else iterate whitin the library and
	 return the books whit that keyword.
  */
void Library::ShowKey(string _keyword){
	//The library size is saved and create a flag
	size_t siz= books.size();
	bool flag = false;
	
	//If is the library is empty just show a message
	if(siz == 0) {
		cout<<"The library is empty\n";
		return;
	}
	
	//Else iterate within the library and show all books with that keyword
	cout<<"The books whit that keyword are: \n";
	for(int i=0; i<siz; i++){
		for(int j = 0; j < books[i].getKeywords().size(); j++){
			if(books[i].getKeywords()[j] == _keyword){
				cout<<books[i].getTitle()<<" by "<<books[i].getAuthor()<<'\n';
				flag = true;
				break;	
			}
		}
	}
	
	//If do not exists any book with that keyword just show a massage
	if(flag == false) cout<<"Couldn't find any book with that keyword\n";
}
