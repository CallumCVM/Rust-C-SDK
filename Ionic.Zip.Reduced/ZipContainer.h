#pragma once

#include "..\Ionic\Zip\ZipFile.h"
#include "..\Ionic\Zip\ZipOutputStream.h"
#include "..\Ionic\Zip\ZipInputStream.h"

namespace Ionic
{
	namespace Zip
{
	class ZipContainer : public Object // 0x0
	{
	public:
		Ionic::Zip::ZipFile* _zf; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		Ionic::Zip::ZipOutputStream* _zos; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		Ionic::Zip::ZipInputStream* _zis; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
