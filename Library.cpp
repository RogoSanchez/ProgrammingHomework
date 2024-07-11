#include<bits/stdc++.h>
using namespace std;

#include"Library.h"

// Constructor of Library  with defaults parametrers
Library::Library(const vector<Book>& vec){
	size_t vecsize = vec.size();
	
	for(int i=0; i<vecsize; i++){
		Insert(vec[i]);
	}
}

// Method to insert a book into the libary
void Library::Insert(Book book){
	size_t siz= books.size();
	
	if(siz == 0){
		books.push_back(book);
		return;
	}
	for(int i=0; i<siz; i++){
		if(book.getAuthor() == books[i].getAuthor()){
			int aux;
			
			for(int j=i;j<siz; j++){
				if(book.getAuthor() != books[j].getAuthor()) break;
				
				if(book.getTitle() < books[j].getTitle()){
					books.insert(books.begin()+j, book);
					return;
				}
				
				aux = j;
			}
			
			books.insert(books.begin()+aux+1, book);
			return;
		}
		
		if(book.getAuthor() < books[i].getAuthor()){
			books.insert(books.begin()+i, book);
			return;
		}
	}
	
	books.push_back(book);
}

// Overload of the method to insert a book into the libary with the data of the book.
void Library::Insert(const int& _code, const string& _author, const string& _title, const int& _amount){
	Book book(_code, _author, _title, _amount);
	
	size_t siz = books.size();
	
	if(siz == 0){
		books.push_back(book);
		return;
	}
	for(int i=0; i<siz; i++){
		if(book.getAuthor() == books[i].getAuthor()){
			int aux;
			
			for(int j=i;j<siz; j++){
				if(book.getAuthor() != books[j].getAuthor()) break;
				
				if(book.getTitle() < books[j].getTitle()){
					books.insert(books.begin()+j, book);
					return;
				}
				
				aux = j;
			}
			
			books.insert(books.begin()+aux+1, book);
			return;
		}
		
		if(book.getAuthor() < books[i].getAuthor()){
			books.insert(books.begin()+i, book);
			return;
		}
	}
	
	books.push_back(book);
}

// Method to delete a book from the library, having the title and the author of the book
void Library::Show(){
	size_t siz= books.size();
	
	if(siz == 0) {
		cout<<"The library is empty\n";
		return;
	}
	
	cout<<"The books are: \n";
	for(int i=0; i<siz; i++){
		cout<<books[i]<<'\n';
	}
}

// Method to delete a book from the library, having the title and the author of the book
void Library::Remove(const string& _title, const string& _author){
	size_t siz= books.size();
	
	if(siz == 0) {
		cout<<"The library is empty\n";
		return;
	}
	
	for(int i=0; i<siz; i++){
		if(books[i].getTitle() == _title && books[i].getAuthor() == _author){
			books[i].SetAmount(books[i].getAmount()-1);
			
			if(books[i].getAmount() == 0) books.erase(books.begin() + i);
			
			return;
		}
	}
	
	cout<<"Couldn't find the book to remove\n";
}

// Method to show all books into the library by a specific author
void Library::ShowBooks(const string& _author){
	size_t siz= books.size();
	
	if(siz == 0) {
		cout<<"The library is empty\n";
		return;
	}
	
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
	
	cout<<"There aren't any book of that author\n";
}

// Method to find a book into the library by its code and return its data
Book Library::FindBook(const int& _code){
	size_t siz= books.size();
	
	if(siz == 0) {
		cout<<"The library is empty\n";
		return 0;
	}
	
	for(int i=0; i<siz; i++){
		if(books[i].getCode() == _code) return books[i];
	}
	
	cout<<"Couldn't find any book with that code\n";
	return 0;
}

// Method to lend a book of the library
void Library::Lend(const string& _title, const string& _author){
	size_t siz= books.size();
	
	if(siz == 0) {
		cout<<"The library is empty\n";
		return;
	}
	
	for(int i=0; i<siz; i++){
		if(books[i].getTitle() == _title && books[i].getAuthor() == _author){
			if(books[i].getAmount() - books[i].getinLoan() >= 3){
				books[i].SetAmount(books[i].getAmount()-1);
				books[i].SetinLoan(books[i].getinLoan()+1);
				cout<<"The loan was completed successfully\n";
				return;
			}
			else{
				cout<<"It is not possible to lend that book\n";
				return;
			}
		}
	}
	
	cout<<"Couldn't find the book to lend\n";
}

// Method to show all books into the library with a keyword
void Library::ShowKey(string _keyword){
	size_t siz= books.size();
	bool flag = false;
	
	if(siz == 0) {
		cout<<"The library is empty\n";
		return;
	}
	
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
	
	if(flag == false) cout<<"Couldn't find any book with that keyword\n";
}
