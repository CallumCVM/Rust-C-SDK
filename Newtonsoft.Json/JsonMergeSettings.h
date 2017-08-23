#pragma once

#include "..\Newtonsoft\Json\Linq\MergeArrayHandling.h"
#include "..\Newtonsoft\Json\Linq\MergeNullValueHandling.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Linq
{
	class JsonMergeSettings : public Object // 0x0
	{
	public:
		Newtonsoft::Json::Linq::MergeArrayHandling _mergeArrayHandling; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
		Newtonsoft::Json::Linq::MergeNullValueHandling _mergeNullValueHandling; // 0x14 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
