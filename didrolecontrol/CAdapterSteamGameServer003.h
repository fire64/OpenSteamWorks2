class CAdapterSteamGameServer003
{
	virtual unknown_ret LogOn() = 0;
	virtual unknown_ret LogOff() = 0;
	virtual unknown_ret BLoggedOn() = 0;
	virtual unknown_ret BSecure() = 0;
	virtual unknown_ret GetSteamID() = 0;
	virtual unknown_ret GSGetSteam2GetEncryptionKeyToSendToNewClient( void *, uint32 *, uint32 ) = 0;
	virtual unknown_ret GSSendUserConnect( uint32, uint32, uint16, const void *, uint32 ) = 0;
	virtual unknown_ret GSRemoveUserConnect( uint32 ) = 0;
	virtual unknown_ret GSSendUserDisconnect( CSteamID, uint32 ) = 0;
	virtual unknown_ret GSSetSpawnCount( uint32 ) = 0;
	virtual unknown_ret GSSetServerType( int32, uint32, uint32, uint16, uint16, uint16, const char *, const char *, bool ) = 0;
	virtual unknown_ret GSUpdateStatus( int32, int32, int32, const char *, const char *, const char * ) = 0;
	virtual unknown_ret GSCreateUnauthenticatedUser( CSteamID * ) = 0;
	virtual unknown_ret GSSetUserData( CSteamID, const char *, uint32 ) = 0;
	virtual unknown_ret GSUpdateSpectatorPort( uint16 ) = 0;
	virtual unknown_ret GSSetGameType( const char * ) = 0;
	virtual unknown_ret GSGetUserAchievementStatus( CSteamID, const char * ) = 0;
};

