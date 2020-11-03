class CAdapterSteamGameServer004
{
	virtual unknown_ret LogOn() = 0;
	virtual unknown_ret LogOff() = 0;
	virtual unknown_ret BLoggedOn() = 0;
	virtual unknown_ret BSecure() = 0;
	virtual unknown_ret GetSteamID() = 0;
	virtual unknown_ret SendUserConnectAndAuthenticate( CSteamID, uint32, void *, uint32 ) = 0;
	virtual unknown_ret CreateUnauthenticatedUserConnection() = 0;
	virtual unknown_ret SendUserDisconnect( CSteamID ) = 0;
	virtual unknown_ret BUpdateUserData( CSteamID, const char *, uint32 ) = 0;
	virtual unknown_ret BSetServerType( int32, uint32, uint32, uint16, uint16, uint16, const char *, const char *, bool ) = 0;
	virtual unknown_ret UpdateServerStatus( int32, int32, int32, const char *, const char *, const char * ) = 0;
	virtual unknown_ret UpdateSpectatorPort( uint16 ) = 0;
	virtual unknown_ret SetGameType( const char * ) = 0;
	virtual unknown_ret BGetUserAchievementStatus( CSteamID, const char * ) = 0;
};

