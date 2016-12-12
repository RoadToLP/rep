#include <iostream>
#include <string>
class cl{
	char* setting;
	cl(const char* arg): setting(new char[std::strlen(arg)+1]){
		std::strcopy(setting, arg);
	}
	~cl(){
		delete[] setting;
	}
	cl(const cl& other){
		tmp_str=new char[std::strlen(arg)+1];
		std::strcopy(tmp_set, other, setting);
		delete setting;
		setting = tmp_set;
		return *this;
	}
}
