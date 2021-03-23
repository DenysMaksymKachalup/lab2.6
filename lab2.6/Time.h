#pragma once
#include <iostream>	
#include <string>
#include <sstream>

using namespace std;

class Time
{
public:
	class Triad
	{
	private:
		int first, second, third;
	public:
		void setF(int value);
		void setS(int value);
		void setT(int value);
		Triad()
			:first(1), second(1), third(1) {}
		Triad(int first, int second, int third);
		Triad(const Triad& a);

		Triad& operator =(const Triad& a);
		operator string () const;

		friend ostream& operator << (ostream& out, const Triad& m);
		friend istream& operator >> (istream& in, Triad& m);
		//friend bool operator ==(Triad t1, Triad t2);
		friend bool operator >(const Triad& t1, const Triad& t2);
		//friend bool operator <(Triad t1, Triad t2);
		//friend bool operator >=(Triad t1, Triad t2);
		//friend bool operator <=(Triad t1, Triad t2);
		//friend bool operator !=(Triad t1, Triad t2);

		Triad& operator ++ ();
		Triad& operator -- ();
		Triad operator ++ (int);
		Triad operator -- (int);

		int getF() const { return first; }
		int getS() const { return second; }
		int getT() const { return third; }


	};
	int getF() const { return triad.getF(); }
	int getS() const { return triad.getS(); }
	int getT() const { return triad.getT(); }
	Time() {}
	Time(int first, int second, int third);
	Time(const Time& tri);
	Time& operator = (const Time& tri);

	operator string () const;

	friend ostream& operator << (ostream& out, const Time& m);
	friend istream& operator >> (istream& in, Time& m);

	void setF(int value);
	void setS(int value);
	void setT(int value);

	Time& operator ++ ();
	Time& operator -- ();
	Time operator ++ (int);
	Time operator -- (int);

	friend bool operator ==(const Time& t1, const Time& t2);
	friend bool operator >(const Time& t1, const Time& t2);
	friend bool operator <(const Time& t1, const Time& t2);
	friend bool operator >=(const Time& t1, const Time& t2);
	friend bool operator <=(const Time& t1, const Time& t2);
	friend bool operator !=(const Time& t1, const Time& t2);

private:
	Triad triad;
};

