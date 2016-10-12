#pragma once
class CommandBase
{
public:
	CommandBase();

	virtual void Execute();

	~CommandBase();
};

