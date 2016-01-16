#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
	public:
		void calculate(){amount += amount * interestRate;}
		static double rate() {return interestRate;}
		static void rate(double);
	private:
		std::string owner;
		double amount;
		static double interestRate;
		static constexpr double todayRate = 42.41;
		static double initRate(){ return todayRate;}
};

void Account::rate(double newRate)
{
	interestRate = newRate;
}

double Account::interestRate = initRate();
#endif