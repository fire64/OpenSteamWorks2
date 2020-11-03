class CSteamUserV006
{
	virtual unknown_ret GetHSteamUser() = 0;
	virtual unknown_ret LogOn( CSteamID ) = 0;
	virtual unknown_ret LogOff() = 0;
	virtual unknown_ret BLoggedOn() = 0;
	virtual unknown_ret GetSteamID() = 0;
	virtual unknown_ret SetRegistryString( EConfigSubTree, const char *, const char * ) = 0;
	virtual unknown_ret GetRegistryString( EConfigSubTree, const char *, char *, int32 ) = 0;
	virtual unknown_ret SetRegistryInt( EConfigSubTree, const char *, int32 ) = 0;
	virtual unknown_ret GetRegistryInt( EConfigSubTree, const char *, int32 * ) = 0;
	virtual unknown_ret InitiateGameConnection( void *, int32, CSteamID, CGameID, uint32, uint16, bool ) = 0;
	virtual unknown_ret TerminateGameConnection( uint32, uint16 ) = 0;
	virtual unknown_ret TrackAppUsageEvent( CGameID, int32, const char * ) = 0;
};

