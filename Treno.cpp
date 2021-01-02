#include <iostream>

class Treno
{
protected:
	int number;
	double speed;
	double distance;
	int delay;
	std::string current_station;
	std::string next_station;
	Treno(int n) : number{ n } {};
public:
	double getDistance()const;
	int getDelay()const;
	std::string getCurrent()const;
	std::string getNext()const;
	virtual void setSpeed(double v) = 0;
	double getSpeed()const;
};

class Regionale : public Treno
{
public:
	Regionale(int n) : Treno(n) {};
	const double speed_max = 160;
	void setSpeed(double v) override;
};
class Alta_Velocità : public Treno
{
public:
	Alta_Velocità(int n) : Treno(n) {};
	const double speed_max = 240;
	void setSpeed(double v) override;
};

class Alta_Velocità_S :public Treno
{
public:
	Alta_Velocità_S(int n) : Treno(n) {};
	const double speed_max = 300;
	void setSpeed(double v) override;
};


double Treno::getSpeed() const { return speed; }
double Treno::getDistance()const { return distance; }
int Treno::getDelay()const { return delay; }
std::string Treno::getCurrent()const { return current_station; }
std::string Treno::getNext()const { return next_station; }

void Regionale::setSpeed(double v)
{
		if (v > speed_max)
			speed = speed_max;
		else
			speed = v;
}

void Alta_Velocità::setSpeed(double v)
{
	if (v > speed_max)
		speed = speed_max;
	else
		speed = v;
}

void Alta_Velocità_S::setSpeed(double v)
{
	if (v > speed_max)
		speed = speed_max;
	else
		speed = v;
}
