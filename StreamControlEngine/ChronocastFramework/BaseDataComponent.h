#pragma once
#include <string>
#include <map>

using namespace std;
class BaseDataComponent
{
protected:
	string ConnectionString;
public:
	BaseDataComponent();
	~BaseDataComponent();
};

