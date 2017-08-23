#pragma once

namespace Apex
{
	namespace AI
{
	class FixedScoreQualifier : public QualifierBase // 0x20
	{
	public:
		float score; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x28
}
