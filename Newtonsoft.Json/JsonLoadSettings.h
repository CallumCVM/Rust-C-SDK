#pragma once

#include "..\Newtonsoft\Json\Linq\CommentHandling.h"
#include "..\Newtonsoft\Json\Linq\LineInfoHandling.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Linq
{
	class JsonLoadSettings : public Object // 0x0
	{
	public:
		Newtonsoft::Json::Linq::CommentHandling _commentHandling; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
		Newtonsoft::Json::Linq::LineInfoHandling _lineInfoHandling; // 0x14 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
