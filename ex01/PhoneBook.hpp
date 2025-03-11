#ifndef PhoneBook_hpp
# define PhoneBook_hpp

# include "Contacts.hpp"

class PhoneBook
{
	public :
		PhoneBook(void);
		~PhoneBook(void);
		
		void	addContact(void);
		void	showContacts(void);
		void	showContact(int toShow);

	private:
		int			id;
		bool		full;
		Contact contacts[8];
		std::string questions[5];


};

#endif
