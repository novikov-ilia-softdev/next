#ifndef IOUTPUTMANAGER_H
#define IOUTPUTMANAGER_H

class IOutputManager{
public:
	IOutputManager() {};
	virtual ~IOutputManager() {};

	virtual void print( const std::string& msg) const = 0;
	virtual void print( const std::string& msg, int i) const = 0;
};

typedef boost::shared_ptr< IOutputManager> IOutputManagerPtr;

#endif // IOUTPUTMANAGER_H
