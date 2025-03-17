#include "PhoneBook.hpp"

int main()
{
	PhoneBook phone_book;
	Contact contact;
	string word;

	while (word.compare("EXIT") != 0)
	{
		cout << "Execute one of these actions:\nADD SEARCH EXIT\n";
		cin >> word;
		if (word.compare("ADD") == 0)
			phone_book.add_contact(contact);
		else if (word.compare("SEARCH") == 0)
			phone_book.serch_contact();
	}
	return (0);
}