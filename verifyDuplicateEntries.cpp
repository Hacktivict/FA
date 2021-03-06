///////////////////////////////////////////////////////////////
// verifyDuplicateEntries.cpp

///////////////////////////////////////////////////////////////
#include "Account.h"
///////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////
using std::vector;
///////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////
bool verifyDuplicateEntries(vector<Account*>*& pv_pca, const accNum_t accNum)
{
	bool isDuplicate = (false);

	for(uint_t i = 0; i < pv_pca->size(); ++i)
	{
		if(pv_pca->at(i)->accountNumber() == accNum) { isDuplicate = true; }
	}

	return(isDuplicate);
}
///////////////////////////////////////////////////////////////
