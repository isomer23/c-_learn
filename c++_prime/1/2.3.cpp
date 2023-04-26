#include<iostream>
int main()
{
	unsigned u1=10,u2=42;
	std::cout<<"u1-u2="<<u1-u2<<std::endl;
	std::cout<<"u2-u1="<<u2-u1<<std::endl;
	int i=10,i2=42;
	std::cout<<"i-i2="<<i-i2<<std::endl;
	std::cout<<"i2-i="<<i2-i<<std::endl;
	std::cout<<"i-u1="<<i-u1<<std::endl;
	std::cout<<"u1-i="<<u1-i<<std::endl;
	return 0;
}
