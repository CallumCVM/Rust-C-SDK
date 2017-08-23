#pragma once

namespace UnityEngine
{
	namespace Experimental
{
{
		namespace Rendering
{
	class InputFilter : public ValueType // 0x0
	{
	public:
		int renderQueueMin; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		int renderQueueMax; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
		int layerMask; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
