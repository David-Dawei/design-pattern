#include <iostream>
using namespace std;

//�ӿ�
class Prototype
{
public :
	Prototype(){}
	virtual ~Prototype(){}

	virtual Prototype * Clone() = 0;
};

//ʵ��
class ConcretePrototype : public Prototype
{
public :
	ConcretePrototype():m_counter(0){}
	virtual ~ConcretePrototype(){}

	//�������캯��
	ConcretePrototype( const ConcretePrototype & rhs)
	{
		m_counter = rhs .m_counter;
	}

	//��������
	virtual ConcretePrototype * Clone()
	{
		//���ÿ������캯��
		return new ConcretePrototype (*this );
	}

private :
	int m_counter;
};

int main(int argc , char **argv)
{
	//���ɶ���
	ConcretePrototype * conProA = new ConcretePrototype ();

	//��������
	ConcretePrototype * conProB = conProA->Clone();

	delete conProA;
	conProA= NULL ;

	delete conProB;
	conProB= NULL ;

	return 0;
}
