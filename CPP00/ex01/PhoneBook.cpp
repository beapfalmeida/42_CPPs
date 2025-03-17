#include "PhoneBook.hpp"

void PhoneBook::add_contact(Contact contact)
{
	cout << "Please enter your First Name\n";
	cin >> contact.first_name;
	cout << "Please enter your Last Name\n";
	cin >> contact.last_name;
	cout << "Please enter your nickname\n";
	cin >> contact.nickname;
	cout << "Please enter your Phone Number\n";
	cin >> contact.phone_nbr;
	cout << "Please enter your Darkest Secret\n";
	cin >> contact.secret;
	contacts[i] = contact;
}

void PhoneBook::serch_contact()
{
	
}
