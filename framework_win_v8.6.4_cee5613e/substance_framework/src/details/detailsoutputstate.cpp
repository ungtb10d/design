/*************************************************************************
* ADOBE CONFIDENTIAL
* ___________________ *
*  Copyright 2020-2022 Adobe
*  All Rights Reserved.
* * NOTICE:  All information contained herein is, and remains
* the property of Adobe and its suppliers, if any. The intellectual
* and technical concepts contained herein are proprietary to Adobe
* and its suppliers and are protected by all applicable intellectual
* property laws, including trade secret and copyright laws.
* Dissemination of this information or reproduction of this material
* is strictly forbidden unless prior written permission is obtained
* from Adobe.
**************************************************************************/
 
#include "detailsoutputstate.h"

#include <assert.h>


void SubstanceAir::Details::OutputState::fill(const OutputInstance& inst)
{
	if (inst.isFormatOverridden() || formatOverridden)
	{
		formatOverride = inst.getFormatOverride();
	}
	formatOverridden = inst.isFormatOverridden();
}
