#ifndef IMAINMANAGERIMPL_H
#define IMAINMANAGERIMPL_H

#include <boost/shared_ptr.hpp>

class IMainManagerImpl{
public:
	IMainManagerImpl() {};
	virtual ~IMainManagerImpl() {};
	virtual void run() = 0;
};

typedef boost::shared_ptr< IMainManagerImpl> IMainManagerImplPtr;

#endif // IMAINMANAGERIMPL_H
