#include "steamid.h"

INT64 CSteamID::GetProfileLink( String^ steamid ) {
	for( INT i = 0; i < steamid->Length; i++ ) {
		if( steamid->Substring( i, 1 ) == ":" ) {
			iAuthSrv = Convert::ToInt32( steamid->Substring( i+1, 1 ) );
			iSteamId = Convert::ToInt32( steamid->Substring( i+3, steamid->Length-(i+3) ) );
			break;
		}
	}
	iSteamId *= 2;
	iSteamId = iSteamId+Convert::ToInt64(61197960265728);
	if( iAuthSrv ) iSteamId++;
	return Convert::ToInt64( Convert::ToString("765"+iSteamId.ToString()) );
}

CSteamID gpSteamId;