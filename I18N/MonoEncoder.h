#pragma once

#include "..\I18N\Common\MonoEncoding.h"

namespace I18N
{
	namespace Common
{
	class MonoEncoder : public Encoder // 0x20
	{
	public:
		I18N::Common::MonoEncoding* encoding; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
