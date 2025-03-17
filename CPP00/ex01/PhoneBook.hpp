#include "Contact.hpp"
#include <iostream>
using namespace std;

class PhoneBook
{
	private:
		Contact contacts[8];
	public:
		PhoneBook();
		~PhoneBook();
		void add_contact(Contact contact);
		void serch_contact();
};
