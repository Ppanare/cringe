#include <iostream>

template<typename T>
class smartMassive
{
private:
	int index;
	T element;
	T* massive = nullptr;
	int amount;
public:
		smartMassive(int amount);
		void print();
		void push_back(T element);
		void add_element(T element,int pos);
		T get_el(int index);
};


template<typename T>
smartMassive<T>::smartMassive(int amount)
{
	this->amount = amount;
	massive = new T [amount];
	index = 0;
}


template<typename T>
T smartMassive<T>::get_el(int index)
{
	return massive[index];
}

template<typename T>
void smartMassive<T>::push_back(T element)
{
	massive[index] = element;
	index++;
}

template<typename T>
void smartMassive<T>::print()
{
	for(int i = 0; i < index; ++i){
		std::cout<<massive[i]<<" ";
	}
}

template<typename T>
void smartMassive<T>::add_element(T element,int pos){
if(pos >= index) {std::cout<<"Cringe"<<std::endl; return;}
else
	massive[pos] = element;
}

int main()
{
	smartMassive<double> sm(2);
	sm.push_back(3.3);
	sm.push_back(2.2);
	sm.add_element(1.1,1);
	sm.print();

}