#include <iostream>

class Human {
public:
	Human() { body_size = 1.68; }

	void setBody_size(float s_bs) {
		body_size = s_bs;
	}
	float getBody_size() {
		return body_size;
	}
private:
	float body_size;

	friend void printSize(Human& HumanObj);
};

void printSize(Human& HumanObj) {
	HumanObj.body_size = 1.70; 
}

int main()
{

	Human H_FObj;

	printSize(H_FObj);

	std::cout << H_FObj.getBody_size() << std::endl;
}

