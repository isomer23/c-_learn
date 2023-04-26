#include<iostream>
#include<string>

int main()
{
	char c;
	std::string s1, s2="";
	std::cout << "please input first string: " << std::endl;
	while(std::cin >> s1){
		s2+=s1;
		std::cout << "please input ('y' or 'n') to come " << std::endl;
		std::cin >> c;
		if(c == 'y' || c=='Y')
			std::cout << "please input next string: " << std::endl;
		else
			break;
	}
	std::cout << s2 << std::endl;
       return 0;
}       
