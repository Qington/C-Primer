#ifndef CHAPTER7_H
#define CHAPTER7_H
#include <vector>
#include <iostream>
#include <sting>

class Screen;

class Window_mgr {
	public:
    	using ScreenIndex = std::vector<Screen>::size_type;
    	inline void clear(ScreenIndex);

	private:
    	std::vector<Screen> screens;
};

class Account {
	public:
    	void calculate() { amount += amount * interestRate; }
    	static double rate() { return interestRate; }
    	static void rate(double newRate) { interestRate = newRate; }

	private:
    	std::string owner;
    	double amount;
    	static double interestRate;
    	static constexpr double todayRate = 42.42;
    	static double initRate() { return todayRate; }
};

double Account::interestRate = initRate();

class Screen{
	public:
		using pos =std::string::size_type;

		Screen()=default;
		Screen(pos wd,pos ht): hight(ht), width(wd), content(wd*ht,"")
		{

		}
		Screen(pos wd,pos ht,char c): hight(ht),width(wd), constent(wd*ht,c)
		{

		}
		char get() const { return content[cursor];}
		char get(pos r,pos c) const { return content[r*width+c]}
		inline Screen& move(pos r, pos c);
	    inline Screen& set(char c);
	    inline Screen& set(pos r, pos c, char ch);
	    const Screen& display(std::ostream& os) const
	    {
	        do_display(os);
	        return *this;
	    }
	    Screen& display(std::ostream& os)
	    {
	        do_display(os);
	        return *this;
	    }
	private:
    	void do_display(std::ostream& os) const { os << contents; }
	private:
		pos currsor=0;
		pos height=0; width=0;
		std::string content;
};

inline void Window_mgr::clear(ScreenIndex i)
{
    if (i >= screens.size()) return; // judge for out_of_range.
    Screen& s = screens[i];
    s.contents = std::string(s.height * s.width, ' ');
}
inline Screen& Screen::move(pos r, pos c)
{
    cursor = r * width + c;
    return *this;
}

inline Screen& Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

inline Screen& Screen::set(pos r, pos c, char ch)
{
    contents[r * width + c] = ch;
    return *this;
}

class Sales_data {
    friend std::istream& read(std::istream& is, Sales_data& item);
    friend std::ostream& print(std::ostream& os, const Sales_data& item);
    friend Sales_data add(const Sales_data& lhs, const Sales_data& rhs);

	public:
	    Sales_data() = default;
	    Sales_data(const std::string& s) : bookNo(s) {}
	    Sales_data(const std::string& s, unsigned n, double p)
	        : bookNo(s), units_sold(n), revenue(n * p)
	    {
	    }
	    Sales_data(std::istream& is) { read(is, *this); }

	    std::string isbn() const { return bookNo; };
	    Sales_data& combine(const Sales_data&);

	private:
    	inline double avg_price() const;

	private:
	    std::string bookNo;
	    unsigned units_sold = 0;
	    double revenue = 0.0;
};

inline double Sales_data::avg_price() const
{
    return units_sold ? revenue / units_sold : 0;
}

// declarations for nonmember parts of the Sales_data interface.
std::istream& read(std::istream& is, Sales_data& item);
std::ostream& print(std::ostream& os, const Sales_data& item);
Sales_data add(const Sales_data& lhs, const Sales_data& rhs);

#endif
