/*
 * main.cpp
 *
 *  Created on: Dec 31, 2016
 *      Author: damon
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};

//Write MyBook class
class MyBook : public Book{
	int p;
public:
	//constructor
	MyBook(string title, string author, int price)
	: Book(title, author){
		p = price;
	}
	//
	void display(){
		cout << "Title: " << title << '\n';
		cout << "Author: " << author << '\n';
		cout << "Price: " << p << '\n';
	}
};

int main() {
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}



