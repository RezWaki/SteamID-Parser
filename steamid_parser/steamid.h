#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;

class CSteamID{
	private:
		INT iAuthSrv;
		INT64 iSteamId;
	public:
		INT64 GetProfileLink( String^ steamid );
};