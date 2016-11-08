#ifndef OUTPUTMANAGER_H
#define OUTPUTMANAGER_H

#include <boost/shared_ptr.hpp>
#include <string>

class OutputManager{
public:
	OutputManager();
	~OutputManager();

	void print( const std::string& msg) const;
	void print( const std::string& msg, int i) const;

private:
};

typedef boost::shared_ptr< OutputManager> OutputManagerPtr;

#endif // OUTPUTMANAGER_H
