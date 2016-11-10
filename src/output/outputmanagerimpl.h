#ifndef OUTPUTMANAGERIMPL_H
#define OUTPUTMANAGERIMPL_H

#include <boost/shared_ptr.hpp>
#include <string>

class OutputManagerImpl{
public:
	OutputManagerImpl();
	~OutputManagerImpl();

	void print( const std::string& msg) const;
	void print( const std::string& msg, int i) const;

private:
};

typedef boost::shared_ptr< OutputManagerImpl> OutputManagerImplPtr;

#endif // OUTPUTMANAGERIMPL_H
