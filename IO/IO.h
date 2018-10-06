#ifndef IO_H_
#define IO_H_

typedef int PinNumber;

class IO_Pin {
public:
	IO_Pin(PinNumber pin) : _pin(pin) {}
	PinNumber pinNumber() { return _pin; }
protected:
	const PinNumber _pin;
};

enum State : bool {
	State_High = true,
	State_Low = false
};

enum InputPull {
	InputPull_None,
	InputPull_Up,
	InputPull_Down,
};

unsigned long millisTime();

#endif /* IO_H_ */