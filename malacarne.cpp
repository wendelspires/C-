//Relational Operators

#include <iostream>

class CTest
  {
	private :
		int		m_idade;
	public :
				CTest();
				~CTest();
		// getters
		void	SayHello();
		// setters
		int		GetIdade();
	protected :
  };

CTest::CTest()
  {
	std::cout << "Estou dentro do construtor" << std::endl;
  }

CTest::~CTest()
  {
	std::cout << "Estou dentro do DEstrutor" << std::endl;
  }

void CTest::SayHello()
{
	std::cout << "Hello world!" << std::endl;
	//
	m_idade = 24;
	m_idade ++;
}

int CTest::GetIdade()
{
	return m_idade;
}


//
int main (){
	
	//
	CTest test;
	
	//
	test.SayHello();
	
	//
	//test.m_idade = 24;
	//test.m_idade++;
	
	std::cout << "Idade = " << test.GetIdade() << std::endl;
	
	
	//
	CTest *test2 = new CTest();
	
	//
	test2->SayHello();
	
	//
	delete test2;
	
	//
	return 0;
}