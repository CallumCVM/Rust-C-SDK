#pragma once

#include "..\TrackIR\dNP_GetSignatureDelegate.h"
#include "..\TrackIR\dNP_RegisterWindowHandle.h"
#include "..\TrackIR\dNP_UnregisterWindowHandle.h"
#include "..\TrackIR\dNP_RegisterProgramProfileID.h"
#include "..\TrackIR\dNP_QueryVersion.h"
#include "..\TrackIR\dNP_RequestData.h"
#include "..\TrackIR\dNP_GetData.h"
#include "..\TrackIR\dNP_UnregisterNotify.h"
#include "..\TrackIR\dNP_StartCursor.h"
#include "..\TrackIR\dNP_StopCursor.h"
#include "..\TrackIR\dNP_ReCenter.h"
#include "..\TrackIR\dNP_StartDataTransmission.h"
#include "..\TrackIR\dNP_StopDataTransmission.h"
#include "..\System\UInt16.h"

namespace rust 
{
	class TrackIR : public Object // 0x0
	{
	public:
		TrackIR::dNP_GetSignatureDelegate* NP_GetSignatureDelegate; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		TrackIR::dNP_RegisterWindowHandle* NP_RegisterWindowHandle; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		TrackIR::dNP_UnregisterWindowHandle* NP_UnregisterWindowHandle; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		TrackIR::dNP_RegisterProgramProfileID* NP_RegisterProgramProfileID; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		TrackIR::dNP_QueryVersion* NP_QueryVersion; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		TrackIR::dNP_RequestData* NP_RequestData; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		TrackIR::dNP_GetData* NP_GetData; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		TrackIR::dNP_UnregisterNotify* NP_UnregisterNotify; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		TrackIR::dNP_StartCursor* NP_StartCursor; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		TrackIR::dNP_StopCursor* NP_StopCursor; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		TrackIR::dNP_ReCenter* NP_ReCenter; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		TrackIR::dNP_StartDataTransmission* NP_StartDataTransmission; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		TrackIR::dNP_StopDataTransmission* NP_StopDataTransmission; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned __int64 frameSignature; // 0x78 (size: 0x8, flags: 0x1, type: 0xb)
		unsigned __int64 staleFrames; // 0x80 (size: 0x8, flags: 0x1, type: 0xb)
		NPRESULT result; // 0x88 (size: 0x4, flags: 0x1, type: 0x11)
		NPDATA data; // 0x8c (size: 0x2, flags: 0x1, type: 0x11)
		bool verbose; // 0x8e (size: 0x1, flags: 0x1, type: 0x2)
		__int64 dllPtr; // 0x90 (size: 0x8, flags: 0x1, type: 0x18)
		System::UInt16 developerID; // 0x98 (size: 0x2, flags: 0x1, type: 0x7)
		__int64 appKeyHigh; // 0xa0 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 appKeyLow; // 0xa8 (size: 0x8, flags: 0x1, type: 0xa)
	}; // size = 0xb0
}
