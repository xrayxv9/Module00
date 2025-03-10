#include <string>

class Contact{
	public:
		~Contact();
		Contact();

		void	setName(std::string);
		void	setNick(std::string nickname);
		void	setLastName(std::string lastname);
		void	setDarkestSecret(std::string darkestSecret);
		void	setPhoneNumber(std::string phoneNumber);
		void	setId(int id);

		std::string getName();
		std::string getDarkestSecret();
		std::string getNick();
		std::string getLastName();
		std::string getPhoneNumber();
		int			getId();


	private:
		std::string firstName;
		std::string nickname;
		std::string lastName;
		std::string darkestSecret;
		std::string phoneNumber;
		int			id;
};

