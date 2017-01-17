#ifndef _CONTEXT_H_ 
#define _CONTEXT_H_
class State;

class Context
{
public:
	Context(State* state);
	~Context();
	void OprationInterface();
	void OperationChangState();

protected:
private:
	friend class State; //������State���п��Է���Context���private�ֶ�
	bool ChangeState(State* state);
private:
	State* _state;
};
#endif