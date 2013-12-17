
#ifndef __BAG_CELL_H__
#define __BAG_CELL_H__

#include "common.h"

class BagCell
{
public:
	BagCell(void);
	virtual ~BagCell(void);

	PROP(uint32, m_nItemId, ItemId);
	PROP(uint32, m_nItemCount, ItemCount);
};

#endif
